/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_test
*/

#include "game.h"
#include "my.h"

int event_test(game_obj_t *game)
{
    game->player->last_action_id = 1;
    my_putstr("event declencher\n");
    return (0);
}