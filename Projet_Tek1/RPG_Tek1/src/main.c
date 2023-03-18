/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** main
*/

#include "interface.h"
#include "game.h"
#include <stdio.h>
#include "save.h"

int main(void)
{
    sfVector2i *rez = launcher_loop();

    if (rez)
        return (game(*rez));
    return (0);
}