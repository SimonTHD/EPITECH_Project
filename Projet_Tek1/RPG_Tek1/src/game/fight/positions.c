/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** positions
*/

#include "fight.h"

void pos1(fight_t *fight, sfKeyCode key)
{
    if (key == sfKeyRight)
        fight->sel_dir = POS3;
    else if (key == sfKeyDown)
        fight->sel_dir = POS2;
}

void pos2(fight_t *fight, sfKeyCode key)
{
    if (key == sfKeyRight)
        fight->sel_dir = POS4;
    else if (key == sfKeyUp)
        fight->sel_dir = POS1;
}

void pos3(fight_t *fight, sfKeyCode key)
{
    if (key == sfKeyLeft)
        fight->sel_dir = POS1;
    else if (key == sfKeyDown)
        fight->sel_dir = POS4;
}

void pos4(fight_t *fight, sfKeyCode key)
{
    if (key == sfKeyLeft)
        fight->sel_dir = POS2;
    else if (key == sfKeyUp)
        fight->sel_dir = POS3;
}

void set_selector_pos(fight_t *fight, sfKeyCode key)
{
    switch (fight->sel_dir) {
    case POS1:
        pos1(fight, key);
        break;
    case POS2:
        pos2(fight, key);
        break;
    case POS3:
        pos3(fight, key);
        break;
    case POS4:
        pos4(fight, key);
        break;
    }
    change_selector_pos(fight);
}