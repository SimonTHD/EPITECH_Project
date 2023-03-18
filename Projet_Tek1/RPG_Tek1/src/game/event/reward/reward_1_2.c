/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reward_1_2
*/

#include "game.h"

int reward_1_2(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reward 1_2\n");
    sfTexture_destroy(game->inv->slot[2]->item_text);
    game->inv->slot[2]->item_sprite = sfSprite_create();
    game->inv->slot[2]->item_text = sfTexture_createFromFile\
("assets/inventory/empty.png", NULL);
    event_addxp(game);
    return (0);
}