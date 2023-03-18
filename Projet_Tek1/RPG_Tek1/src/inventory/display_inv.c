/*
** EPITECH PROJECT, 2020
** display_inv
** File description:
** display_inv
*/

#include "game.h"

///////////////////////////////////////////////////////////////////////////////

void draw_inventory(game_obj_t *game, sfWindow *window, sfEvent event)
{
    sfRenderWindow *win = (sfRenderWindow *)window;
    sfRenderWindow_setView(win, sfRenderWindow_getDefaultView(win));
    sfRenderWindow_drawSprite(win, game->inv->slot[1]->item_sprite, NULL);
    for (int i = 2; i < 20; i++) {
        sfSprite_setPosition(game->inv->slot[i]->item_sprite, \
game->inv->slot[i]->item_pos);
        sfRenderWindow_drawSprite(win, game->inv->slot[i]->item_sprite, \
NULL);
    }
    sfRenderWindow_display(win);
}

///////////////////////////////////////////////////////////////////////////////

void inv_equipment(inv_t * inv, item_t **item, sfWindow *window)
{
    int i = 0;
    int j = 0;

    if (sfKeyboard_isKeyPressed(sfKeyT)) {
        inv->pos_g = sfMouse_getPosition(window);
        i = item_sprite(inv->pos_g, item);
        if (item[i]->status == 1 && item[i]->can_e > 0)
            equipment_fct(item[i], item);
        inv->fill = 0;
    } else if (sfKeyboard_isKeyPressed(sfKeyP)) {
        inv->pos_g = sfMouse_getPosition(window);
        j = item_sprite(inv->pos_g, item);
        if (item[j]->status == 1 && item[j]->can_e > 0)
            unequipment_fct(item[j], item);
        inv->fill = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////