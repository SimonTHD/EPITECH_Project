/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reponse_quest_4_2
*/

#include "game.h"
#include "fight.h"

int reponse_quest_4_2(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reponse 4_2\n");
    int id = 17;
    game->player->last_action_id = id;
    game->actual_map->event[0] = (evt)&null_event;
    add_msg_talk_box(game, strdup(quest_4_2_dialogue));
    return (0);
}