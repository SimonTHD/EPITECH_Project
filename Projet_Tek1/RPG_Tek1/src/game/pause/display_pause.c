/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display_pause
*/

#include "save.h"
#include "game.h"
#include "interface.h"

int button_pause_overfly(button_t *btn, sfVector2i mouse_pos, sfEvent *event)
{
    if (insidebox_detect(sfRectangleShape_getPosition(btn->rectangle_shape), \
sfRectangleShape_getSize(btn->rectangle_shape), convert_2i_to_2f(mouse_pos), \
(sfVector2f){1, 1})) {
        sfIntRect rect = sfRectangleShape_getTextureRect\
(btn->rectangle_shape);
        if (event->type == sfEvtMouseButtonPressed)
            rect.top = 400;
        else if (event->type == sfEvtMouseButtonReleased)
            return (true);
        else
            rect.top = 200;
        sfRectangleShape_setTextureRect(btn->rectangle_shape, rect);
    }
    return (false);
}

int manage_pause_events(button_t *pause, sfRenderWindow *window, sfEvent *evnt)
{
    button_t *tmp_list = pause;
    sfVector2i mouse_pos = sfMouse_getPosition((sfWindow *)window);

    while (sfRenderWindow_pollEvent(window, evnt)){
        while (tmp_list) {
            reset_texture_rect(tmp_list->rectangle_shape);
            if (button_pause_overfly(tmp_list, mouse_pos, evnt))
                return (tmp_list->id);
            tmp_list = tmp_list->next;
        }
    }
    return (0);
}

int pause_buttons(game_obj_t *game, button_t *pause, sfRenderWindow *window)
{
    static int id = 4;
    int event_result = 0;
    sfEvent *event = malloc(sizeof(sfEvent));

    event_result = manage_pause_events(pause, window, event);
    if (event_result == id)
        return (2);
    if (event_result == id + 1)
        if (save_game(game) == true)
            return (0);
    if (event_result == id + 2)
        return (1);
    if (event_result != 0)
        id += 3;
    return (0);
}

int display_pause(game_obj_t *game, sfRenderWindow *window)
{
    bool pause_is_on = true;
    int status = 0;
    button_t *pause = load_pause_btns(window);
    sfSprite *background = NULL;
    sfTexture *background_texture = sfTexture_createFromFile\
("assets/game/pause/black_screen.png", NULL);

    sfRenderWindow_setView(window, sfRenderWindow_getDefaultView(window));
    background = sfSprite_create();
    sfSprite_setTexture(background, background_texture, sfFalse);
    while (pause_is_on) {
        sfRenderWindow_drawSprite(window, background, NULL);
        status = pause_buttons(game, pause, window);
        if (status == 1)
            pause_is_on = false;
        else if (status == 2)
            return (2);
        draw_btn(window, pause);
        sfRenderWindow_display(window);
    }
    return (0);
}