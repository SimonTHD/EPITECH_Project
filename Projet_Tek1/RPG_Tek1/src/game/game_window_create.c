/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** windows_create
*/

#include "game.h"

sfRenderWindow *game_window_create(sfVector2i win_rez)
{
    sfRenderWindow *window = sfRenderWindow_create((sfVideoMode)\
    {win_rez.x, win_rez.y, 32}, "le mordor de tes morts", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}