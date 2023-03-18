/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** launcher_loop
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Window/Cursor.h>
#include <stdbool.h>
#include <stdio.h>
#include "interface.h"

sfRectangleShape *create_button(void)
{
    sfTexture *texture = sfTexture_createFromFile\
("assets/launcher/htp_btn.png", NULL);
    sfVector2f size = (sfVector2f){600, 200};
    sfRectangleShape *rectangle_shape = sfRectangleShape_create();
    sfRectangleShape_setTexture(rectangle_shape, texture, sfFalse);
    sfRectangleShape_setPosition(rectangle_shape, \
(sfVector2f){1920 / 5.4, 1080 / 3.5});
    sfRectangleShape_setSize(rectangle_shape, \
(sfVector2f){400, 150});
    sfRectangleShape_setTextureRect(rectangle_shape, \
(sfIntRect){0, 0, 600, 200});
    return (rectangle_shape);
}

sfVector2i *launcher_loop(void)
{
    bool menu_is_open = true;
    sfEvent *event = malloc(sizeof(sfEvent));
    launcher_t *launcher = create_init_launcher_obj();
    sfRectangleShape *htp = create_button();
    while (menu_is_open) {
        sfRenderWindow_clear(launcher->window, sfBlack);
        sfRenderWindow_drawSprite(launcher->window, \
        launcher->background_sprite, NULL);
        if (manage_button_evt(launcher, event))
            menu_is_open = false;
        if (sfKeyboard_isKeyPressed(sfKeyH))
            display_htp(launcher);
        sfRenderWindow_drawRectangleShape(launcher->window, htp, NULL);
        draw_btn(launcher->window, launcher->btn_list);
        sfRenderWindow_display(launcher->window);
    }
    sfRenderWindow_close(launcher->window);
    return (launcher->game_rez);
}