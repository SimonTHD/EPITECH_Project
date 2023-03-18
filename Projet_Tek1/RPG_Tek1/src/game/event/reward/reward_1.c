/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reward_1
*/

#include "game.h"

int reward_1(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reward 1\n");
    sfTexture_destroy(game->inv->slot[2]->item_text);
    game->inv->slot[2]->item_text = sfTexture_createFromFile\
("assets/inventory/key.png", NULL);
    sfSprite_setTexture(game->inv->slot[2]->item_sprite, \
game->inv->slot[2]->item_text, NULL);
    quest_1_2(game);
    return (0);
}