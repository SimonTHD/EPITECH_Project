/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_init_launcher_obj
*/

#include "interface.h"
#include <stdlib.h>

launcher_t *create_init_launcher_obj(void)
{
    launcher_t *launcher = malloc(sizeof(launcher_t));
    create_launcher_window(launcher);
    launcher->background_texture = sfTexture_createFromFile\
    ("assets/launcher/background.png", NULL);
    launcher->background_sprite = sfSprite_create();
    sfSprite_setTexture(launcher->background_sprite, \
    launcher->background_texture, sfFalse);
    launcher->btn_list = NULL;
    launcher->music = NULL;
    launcher->btn_list = load_btn_list();
    launcher->game_rez = malloc(sizeof(sfVector2i));
    *launcher->game_rez = (sfVector2i){1152, 648};
    return (launcher);
}