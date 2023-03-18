/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reward_3_2
*/

#include "game.h"

int reward_3_2(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reward 3_2\n");
    event_addxp(game);
    quest_4(game);
    return (0);
}