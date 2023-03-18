/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reponse_quest_2
*/

#include "game.h"
#include "fight.h"

int reponse_quest_2(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reponse 2\n");
    int id = 7;
    if (run_combat(game, 3)) {
        game->actual_map->event[3] = (evt)&null_event;
        game->actual_map->event[0] = (evt)&reponse_quest_2_2;
        game->player->last_action_id = id;
    }
    return (0);
}