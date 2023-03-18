/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** clocks
*/

#include "fight.h"

void init_clocks(fight_t *fight)
{
    fight->g_clock = sfClock_create();
    fight->clock_cooldown = sfClock_create();
    fight->en_attack_clock = sfClock_create();
}