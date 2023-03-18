/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** create_pause_menu_btns
*/

#include "interface.h"

button_t *resume_game_create(sfRenderWindow *window)
{
    button_t *resume = malloc(sizeof(button_t));
    sfVector2u rez = sfRenderWindow_getSize(window);
    float scale = (float)sfRenderWindow_getSize(window).y / 1080;
    resume->texture = sfTexture_createFromFile\
("assets/game/pause/resume.png", NULL);
    resume->size = (sfVector2f){600, 200};
    resume->rectangle_shape = sfRectangleShape_create();
    sfRectangleShape_setTexture(resume->rectangle_shape, resume->texture, \
sfFalse);
    sfRectangleShape_setPosition(resume->rectangle_shape, \
(sfVector2f){rez.x / 14, rez.y / 2.2});
    sfRectangleShape_setSize(resume->rectangle_shape, (sfVector2f){400, 150});
    sfRectangleShape_setTextureRect(resume->rectangle_shape, \
(sfIntRect){0, 0, 600, 200});
    resume->data = NULL;
    sfRectangleShape_scale(resume->rectangle_shape, \
(sfVector2f){scale, scale});
    return (resume);
}

button_t *save_game_create(sfRenderWindow *window)
{
    button_t *save = malloc(sizeof(button_t));
    sfVector2u rez = sfRenderWindow_getSize(window);
    float scale = (float)sfRenderWindow_getSize(window).y / 1080;
    save->texture = sfTexture_createFromFile\
("assets/game/pause/save.png", NULL);
    save->size = (sfVector2f){600, 200};
    save->rectangle_shape = sfRectangleShape_create();
    sfRectangleShape_setTexture(save->rectangle_shape, save->texture, sfFalse);
    sfRectangleShape_setPosition(save->rectangle_shape, \
(sfVector2f){rez.x / 2.6, rez.y / 2.2});
    sfRectangleShape_setSize(save->rectangle_shape, (sfVector2f){400, 150});
    sfRectangleShape_setTextureRect(save->rectangle_shape, \
(sfIntRect){0, 0, 600, 200});
    save->data = NULL;
    sfRectangleShape_scale(save->rectangle_shape, \
(sfVector2f){scale, scale});
    return (save);
}

button_t *exit_game_create(sfRenderWindow *window)
{
    button_t *close = malloc(sizeof(button_t));
    sfVector2u rez = sfRenderWindow_getSize(window);
    float scale = (float)sfRenderWindow_getSize(window).y / 1080;
    close->texture = sfTexture_createFromFile\
("assets/launcher/close_btn.png", NULL);
    close->size = (sfVector2f){600, 200};
    close->rectangle_shape = sfRectangleShape_create();
    sfRectangleShape_setTexture(close->rectangle_shape, \
close->texture, sfFalse);
    sfRectangleShape_setPosition(close->rectangle_shape, \
(sfVector2f){rez.x / 1.4, rez.y / 2.2});
    sfRectangleShape_setSize(close->rectangle_shape, (sfVector2f){400, 150});
    sfRectangleShape_setTextureRect(close->rectangle_shape, \
(sfIntRect){0, 0, 600, 200});
    close->data = NULL;
    sfRectangleShape_scale(close->rectangle_shape, \
(sfVector2f){scale, scale});
    return (close);
}