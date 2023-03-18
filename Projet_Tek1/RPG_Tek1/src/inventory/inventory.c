/*
** EPITECH PROJECT, 2020
** inventory
** File description:
** invenetory
*/

#include "game.h"

///////////////////////////////////////////////////////////////////////////////

void init_inventory(game_obj_t *game)
{
    game->inv = malloc(sizeof(inv_t));
    if (game->inv == NULL)
        return;
    game->inv->clock_inv = sfClock_create();
    game->inv->seconds = 0;
    game->inv->quit = 0;
    game->inv->fill = 0;
    game->inv->is_display = false;
}

///////////////////////////////////////////////////////////////////////////////

void inventory_event(game_obj_t *game, sfEvent event, sfWindow *window)
{
    draw_inventory(game, window, event);
    game->inv->time_inv = sfClock_getElapsedTime(game->inv->clock_inv);
    game->inv->seconds = game->inv->time_inv.microseconds / 1000000.0;
    if (event.type == sfEvtClosed) {
        game->inv->quit = 1;
        game->is_play = false;
        return;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        game->inv->quit = 1;
        return;
    } else if (game->inv->seconds > 0.08) {
        inv_equipment(game->inv, game->inv->slot, window);
        sfClock_restart(game->inv->clock_inv);
        return;
    }
}

///////////////////////////////////////////////////////////////////////////////

void inventory(game_obj_t *game, sfWindow *window, sfEvent event)
{
    sfRenderWindow *win = (sfRenderWindow *)window;
    draw_inventory(game, window, event);
    while (game->inv->quit == 0) {
        while (sfRenderWindow_pollEvent(win, &event))
            inventory_event(game, event, window);
    }
    game->inv->quit = 0;
}

///////////////////////////////////////////////////////////////////////////////