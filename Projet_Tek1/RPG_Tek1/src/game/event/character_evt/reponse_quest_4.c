/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reponse_quest_4
*/

#include "game.h"
#include "fight.h"

int reponse_quest_4(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reponse 4\n");
    int id =15;
    if (run_combat(game, 1)) {
        game->player->last_action_id = id;
        game->actual_map->event[0] = (evt)&reponse_quest_4_2;
    }
    return (0);
}