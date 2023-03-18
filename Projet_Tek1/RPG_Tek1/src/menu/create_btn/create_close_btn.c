/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_start_btn
*/

#include "interface.h"

button_t *close_btn_create(void)
{
    button_t *close = malloc(sizeof(button_t));
    close->texture = sfTexture_createFromFile\
    ("assets/launcher/close_btn.png", NULL);
    close->size = (sfVector2f){600, 200};
    close->rectangle_shape = sfRectangleShape_create();
    sfRectangleShape_setTexture(close->rectangle_shape, \
    close->texture, sfFalse);
    sfRectangleShape_setPosition(close->rectangle_shape, \
    (sfVector2f){1920 / 30, 1080 / 25});
    sfRectangleShape_setSize(close->rectangle_shape, \
    (sfVector2f){400, 150});
    sfRectangleShape_setTextureRect(close->rectangle_shape, \
    (sfIntRect){0, 0, 600, 200});
    close->data = NULL;
    return (close);
}