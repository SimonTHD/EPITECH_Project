/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_rez_btn
*/

#include "interface.h"

button_t *hd_btn_create(void)
{
    button_t *hd_btn = malloc(sizeof(button_t));
    hd_btn->texture = sfTexture_createFromFile("assets/launcher/play_hd.png", \
NULL);
    hd_btn->size = (sfVector2f){600, 200};
    hd_btn->rectangle_shape = sfRectangleShape_create();
    sfRectangleShape_setTexture(hd_btn->rectangle_shape, \
    hd_btn->texture, sfFalse);
    sfRectangleShape_setPosition(hd_btn->rectangle_shape, \
    (sfVector2f){1920 / 5.4, 1080 / 1.4});
    sfRectangleShape_setSize(hd_btn->rectangle_shape, \
    (sfVector2f){400, 150});
    sfRectangleShape_setTextureRect(hd_btn->rectangle_shape, \
    (sfIntRect){0, 0, 600, 200});
    sfVector2i *rez = malloc(sizeof(sfVector2i));
    *rez = (sfVector2i){1360, 720};
    hd_btn->data = rez;
    return (hd_btn);
}

button_t *fhd_btn_create(void)
{
    button_t *fhd_btn = malloc(sizeof(button_t));
    fhd_btn->texture = sfTexture_createFromFile\
    ("assets/launcher/play_fhd.png", NULL);
    fhd_btn->size = (sfVector2f){600, 200};
    fhd_btn->rectangle_shape = sfRectangleShape_create();
    sfRectangleShape_setTexture(fhd_btn->rectangle_shape, \
    fhd_btn->texture, sfFalse);
    sfRectangleShape_setPosition(fhd_btn->rectangle_shape, \
    (sfVector2f){1920 / 1.4, 1080 / 3.5});
    sfRectangleShape_setSize(fhd_btn->rectangle_shape, \
    (sfVector2f){400, 150});
    sfRectangleShape_setTextureRect(fhd_btn->rectangle_shape, \
    (sfIntRect){0, 0, 600, 200});
    sfVector2i *rez = malloc(sizeof(sfVector2i));
    *rez = (sfVector2i){1920-5, 1080-50};
    fhd_btn->data = rez;
    return (fhd_btn);
}

button_t *sd_btn_create(void)
{
    button_t *sd_btn = malloc(sizeof(button_t));
    sd_btn->texture = sfTexture_createFromFile\
    ("assets/launcher/play_sd.png", NULL);
    sd_btn->size = (sfVector2f){600, 200};
    sd_btn->rectangle_shape = sfRectangleShape_create();
    sfRectangleShape_setTexture(sd_btn->rectangle_shape, \
    sd_btn->texture, sfFalse);
    sfRectangleShape_setPosition(sd_btn->rectangle_shape, \
    (sfVector2f){1920 / 1.4, 1080 / 1.4});
    sfRectangleShape_setSize(sd_btn->rectangle_shape, \
    (sfVector2f){400, 150});
    sfRectangleShape_setTextureRect(sd_btn->rectangle_shape, \
    (sfIntRect){0, 0, 600, 200});
    sfVector2i *rez = malloc(sizeof(sfVector2i));
    *rez = (sfVector2i){1152, 648};
    sd_btn->data = rez;

    return (sd_btn);
}