/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reponse_quest_1_2
*/

#include "game.h"
#include "fight.h"

int reponse_quest_1_2(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reponse 1_2\n");
    int id = 5;
    add_msg_talk_box(game, strdup(quest_1_2_dialogue));
    game->player->last_action_id = id;
    event_addxp(game);
    game->actual_map->event[2] = (evt)&quest_2;
    game->actual_map->event[0] = (evt)&null_event;
    return (0);
}