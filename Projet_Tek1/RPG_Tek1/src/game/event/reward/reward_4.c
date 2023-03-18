/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reward_4
*/

#include "game.h"

int reward_4(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reward 4\n");
    event_addxp(game);
    event_addxp(game);
    event_addxp(game);
    event_addxp(game);
    event_addxp(game);
    quest_4_2(game);
    return (0);
}