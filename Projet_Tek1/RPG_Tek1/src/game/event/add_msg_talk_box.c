/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_talk_box
*/

#include "game.h"

void add_msg_talk_box(game_obj_t *game, char *text)
{
    if (game->talk_box->in_print)
        game->talk_box->in_reset = true;
    print_dialogue_box(game);
    sfText_setString(game->talk_box->text, text);
    game->talk_box->have_talk = true;
    game->talk_box->sound = sfSound_create();
    sfSound_setBuffer(game->talk_box->sound, game->talk_box->buffer_sound);
}