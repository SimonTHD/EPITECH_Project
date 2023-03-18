/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** rand
*/

#include "fight.h"

int get_rand(int min, int max)
{
    return ((rand() % ((max + 1) - min)) + min);
}