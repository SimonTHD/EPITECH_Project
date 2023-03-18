/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** enemy_capacities
*/

#include "fight.h"

void enemy_attack(fight_t *fight)
{
    int dmg = fight->enemy_full_hp / 8;

    if (fight->sel_dir == POS4)
        return;
    else if (fight->player->pv - dmg <= 0) {
        fight->enemy_hp = 0;
        fight->game_status = LOST;
    } else
        fight->player->pv -= dmg;
}