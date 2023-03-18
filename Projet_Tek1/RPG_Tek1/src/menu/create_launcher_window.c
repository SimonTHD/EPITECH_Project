/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_launcher_windows
*/

#include "interface.h"

void create_launcher_window(launcher_t *launcher)
{
    launcher->window = sfRenderWindow_create((sfVideoMode){1920, 1080, 32}, \
    "le launcher de tes morts", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(launcher->window, 60);
}