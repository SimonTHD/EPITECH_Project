/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** draw_btn
*/

#include "interface.h"
#include "my.h"

void draw_btn(sfRenderWindow *launcher_window, button_t *btn_list)
{
    button_t *tmp_list = btn_list;
    while (tmp_list) {
        sfRenderWindow_drawRectangleShape(launcher_window, \
        tmp_list->rectangle_shape, NULL);
        tmp_list = tmp_list->next;
    }
}