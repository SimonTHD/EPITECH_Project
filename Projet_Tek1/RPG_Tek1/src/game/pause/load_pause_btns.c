/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_pause_btns
*/

#include "interface.h"

button_t *load_pause_btns(sfRenderWindow *window)
{
    button_t *btn_list = NULL;

    btn_list = add_btn(btn_list, exit_game_create(window));
    btn_list = add_btn(btn_list, save_game_create(window));
    btn_list = add_btn(btn_list, resume_game_create(window));
    return (btn_list);
}