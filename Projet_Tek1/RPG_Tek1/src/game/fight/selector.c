/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** selector
*/

#include "fight.h"

void change_selector_pos(fight_t *fight)
{
    sfVector2f pos;

    if (fight->sel_dir == POS1 || fight->sel_dir == POS2)
        pos.x = sfRenderWindow_getSize(fight->win).x / 6;
    else
        pos.x = sfRenderWindow_getSize(fight->win).x / 2.15;
    if (fight->sel_dir == POS1 || fight->sel_dir == POS3)
        pos.y = sfRenderWindow_getSize(fight->win).y / 1.2;
    else
        pos.y = sfRenderWindow_getSize(fight->win).y / 1.1;
    sfText_setPosition(fight->selector, pos);
}