/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** structs
*/

#include "fight.h"

sfSprite *create_gandalf(sfRenderWindow *win)
{
    sfSprite *g_sprite = sfSprite_create();
    sfTexture *g_texture = sfTexture_createFromFile(GANDALF, NULL);
    sfVector2f g_pos;
    sfVector2f scale;
    sfIntRect rect;

    g_pos.x = sfRenderWindow_getSize(win).x / 7;
    g_pos.y = sfRenderWindow_getSize(win).y / 1.9;
    rect.left = 0;
    rect.top = 0;
    rect.height = 246;
    rect.width = 143;
    scale.x = 0.6;
    scale.y = 0.6;
    sfSprite_setTexture(g_sprite, g_texture, sfFalse);
    sfSprite_setTextureRect(g_sprite, rect);
    sfSprite_scale(g_sprite, scale);
    sfSprite_setPosition(g_sprite, g_pos);
    return (g_sprite);
}

sfSprite *init_background(sfRenderWindow *win)
{
    sfVector2u size = sfRenderWindow_getSize(win);
    sfTexture *b_text = sfTexture_createFromFile(BACKGROUND, NULL);
    sfSprite *b_sprite = sfSprite_create();

    sfSprite_setTexture(b_sprite, b_text, sfTrue);
    sfSprite_setScale(b_sprite, (sfVector2f){(float)size.x / 600, \
(float)size.y / 800});
    return (b_sprite);
}

sfText *get_text(fight_t *fight, char *name, float pos_x, float pos_y)
{
    sfText *txt = sfText_create();
    sfFont *font = sfFont_createFromFile(FONT);
    sfVector2f pos;

    pos.x = sfRenderWindow_getSize(fight->win).x / pos_x;
    pos.y = sfRenderWindow_getSize(fight->win).y / pos_y;
    sfText_setString(txt, name);
    sfText_setFont(txt, font);
    sfText_setCharacterSize(txt, 17);
    sfText_setPosition(txt, pos);
    return (txt);
}

void init_texts(fight_t *fight)
{
    fight->atq1 = get_text(fight, ATQ1, 5, 1.2);
    fight->atq2 = get_text(fight, ATQ2, 5, 1.1);
    fight->atq3 = get_text(fight, ATQ3, 2, 1.2);
    fight->atq4 = get_text(fight, ATQ4, 2, 1.1);
    fight->you = get_text(fight, "You", 6.1, 2.4);
    fight->pl_text = get_text(fight, "LIFE", 6, 2.17);
    fight->en_text = get_text(fight, "LIFE", 1.37, 2.16);
    fight->selector = get_text(fight, ">", 6, 1.2);
    fight->fight_infos = get_text(fight, "You attack the enemy!", 3, 1.2);
}

fight_t *init_fight(sfRenderWindow *win, player_t *player, int enemy)
{
    fight_t *fight = malloc(sizeof(fight_t));

    init_clocks(fight);
    fight->win = win;
    init_texts(fight);
    fight->enemy_type = enemy;
    fight->g_sprite = create_gandalf(win);
    fight->b_sprite = init_background(win);
    fight->p_life = init_life(fight, 0);
    fight->e_life = init_life(fight, 1);
    fight->enemy_text = get_enemy_text(fight, player);
    fight->enemy_full_hp = get_rand(fight->enemy_level * 1.8, \
    fight->enemy_level * 2);
    fight->enemy_hp = fight->enemy_full_hp;
    fight->enemy = init_enemy(fight);
    fight->sel_dir = POS1;
    fight->game_status = RUNNING;
    fight->atq_cooldown = 0;
    fight->turn = 0;
    return (fight);
}