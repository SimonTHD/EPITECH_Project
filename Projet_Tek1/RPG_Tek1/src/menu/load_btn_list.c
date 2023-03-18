/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_btn_list
*/

#include "interface.h"
#include "my.h"

button_t *add_btn(button_t *btn_list, button_t *new_btn)
{
    static int id = 0;
    new_btn->id = id;
    id++;
    new_btn->next = btn_list;
    return (new_btn);
}

button_t *load_btn_list(void)
{
    button_t *btn_list = NULL;
    btn_list = add_btn(btn_list, close_btn_create());
    btn_list = add_btn(btn_list, hd_btn_create());
    btn_list = add_btn(btn_list, sd_btn_create());
    btn_list = add_btn(btn_list, fhd_btn_create());
    return (btn_list);
}