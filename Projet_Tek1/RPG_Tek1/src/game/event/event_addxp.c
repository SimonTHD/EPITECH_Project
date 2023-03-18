/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_addxp
*/

#include "game.h"
#include "my.h"
#include <math.h>

//LVL to XP : xp = 3*pow((LVL+1),2) - 11

//XP to LVL : LVL = sqrt(XP+11 /3) - 1

int event_addxp(game_obj_t *game)
{
    game->player->xp += 10;
    int xp = game->player->xp;
    int level = sqrt((xp + 11) / 3) - 1;
    game->player->next_lvl_100 = 100 * xp / (3 * pow((level+2), 2) - 11);
    if (level > game->player->lvl) {
        game->player->lvl = level;
    }
    return (0);
}