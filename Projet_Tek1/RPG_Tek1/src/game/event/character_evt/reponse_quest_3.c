/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reponse_quest_3
*/

#include "game.h"
#include "fight.h"

int reponse_quest_3(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reponse 3\n");
    int id = 11;
    game->player->last_action_id = id;
    game->actual_map->event[4] = (evt)&null_event;
    game->actual_map->event[0] = (evt)&reponse_quest_3_2;
    return (0);
}