/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reward_4_2
*/

#include "game.h"

int reward_4_2(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reward 4_2\n");
    event_addxp(game);
    return (0);
}