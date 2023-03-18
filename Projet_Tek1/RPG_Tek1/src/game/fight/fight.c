/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** fight
*/

#include "fight.h"
#include "game.h"

void animate_gandalf(fight_t *fight)
{
    sfIntRect rect = sfSprite_getTextureRect(fight->g_sprite);

    if (sfClock_getElapsedTime(fight->g_clock).microseconds / 1000 > 400) {
        sfClock_restart(fight->g_clock);
        if (rect.left == GANDALF_SPR)
            rect.left = 0;
        else
            rect.left = GANDALF_SPR;
        sfSprite_setTextureRect(fight->g_sprite, rect);
        rect = sfSprite_getTextureRect(fight->enemy);
        if (rect.left == ENEMY_SPR)
            rect.left = 0;
        else
            rect.left = ENEMY_SPR;
        sfSprite_setTextureRect(fight->enemy, rect);
    }
}

void end_fight(fight_t *fight, sfMusic *music)
{
    sfMusic_destroy(music);
    sfSprite_destroy(fight->g_sprite);
    sfSprite_destroy(fight->b_sprite);
    sfText_destroy(fight->atq1);
    sfText_destroy(fight->atq2);
    sfText_destroy(fight->atq3);
    sfText_destroy(fight->atq4);
    sfText_destroy(fight->enemy_text);
    sfSprite_destroy(fight->p_life);
    sfSprite_destroy(fight->e_life);
    sfText_destroy(fight->you);
    sfSprite_destroy(fight->enemy);
    sfText_destroy(fight->selector);
}

sfMusic *play_music(void)
{
    sfMusic *music = sfMusic_createFromFile(MUSIC);

    sfMusic_play(music);
    sfMusic_setLoop(music, sfTrue);
    return (music);
}

void display_elems(fight_t *fight)
{
    sfRenderWindow_drawSprite(fight->win, fight->b_sprite, NULL);
    sfRenderWindow_drawSprite(fight->win, fight->g_sprite, NULL);
    if (!fight->atq_cooldown) {
        sfRenderWindow_drawText(fight->win, fight->atq1, NULL);
        sfRenderWindow_drawText(fight->win, fight->atq2, NULL);
        sfRenderWindow_drawText(fight->win, fight->atq3, NULL);
        sfRenderWindow_drawText(fight->win, fight->atq4, NULL);
        sfRenderWindow_drawText(fight->win, fight->selector, NULL);
    }
    sfRenderWindow_drawText(fight->win, fight->enemy_text, NULL);
    sfRenderWindow_drawSprite(fight->win, fight->p_life, NULL);
    sfRenderWindow_drawSprite(fight->win, fight->e_life, NULL);
    sfRenderWindow_drawText(fight->win, fight->you, NULL);
    sfRenderWindow_drawText(fight->win, fight->pl_text, NULL);
    sfRenderWindow_drawText(fight->win, fight->en_text, NULL);
    sfRenderWindow_drawSprite(fight->win, fight->enemy, NULL);
    if (fight->atq_cooldown)
        sfRenderWindow_drawText(fight->win, fight->fight_infos, NULL);
}

int start_fight(sfRenderWindow *win, player_t *player, game_obj_t *game, \
int enemy)
{
    sfMusic *music = play_music();
    fight_t *fight = init_fight(win, player, enemy);
    sfRenderWindow_setKeyRepeatEnabled(win, sfFalse);

    fight->player = player;
    while (sfRenderWindow_isOpen(win) && fight->game_status == RUNNING) {
        set_life_text(fight, player, 0);
        set_life_text(fight, player, 1);
        cooldown_check(fight);
        if (handle_events(fight, game))
            return (-1);
        sfRenderWindow_clear(win, sfBlack);
        animate_gandalf(fight);
        display_elems(fight);
        sfRenderWindow_display(win);
    }
    end_fight(fight, music);
    return (fight->game_status);
}