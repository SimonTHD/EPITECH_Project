/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** print_dialogue_box
*/

#include "game.h"

void display_box(game_obj_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->talk_box->cadre, NULL);
    sfRenderWindow_drawText(game->window, game->talk_box->text, NULL);
}

void start_talkbox(game_obj_t *game)
{
    sfSound_play(game->talk_box->sound);
    sfSound_destroy(game->talk_box->sound);
    game->talk_box->clock = sfClock_create();
}

void print_dialogue_box(game_obj_t *game)
{
    if (game->talk_box->have_talk) {
        if (!game->talk_box->in_print) {
            game->talk_box->in_print = true;
            start_talkbox(game);
        }
        game->talk_box->have_talk = false;
    }
    if (game->talk_box->in_print) {
        display_box(game);
        if (sfClock_getElapsedTime(game->talk_box->clock).microseconds > \
        8000000 || game->talk_box->in_reset) {
            game->talk_box->in_reset = false;
            game->talk_box->in_print = false;
            sfClock_destroy(game->talk_box->clock);
        }
    }
}