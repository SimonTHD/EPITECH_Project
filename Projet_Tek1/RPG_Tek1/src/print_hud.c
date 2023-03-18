/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** print_hud
*/

#include "game.h"

void print_hud(game_obj_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->hud->xp_bar_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->hud->pv_bar_sprite, NULL);
    sfRenderWindow_drawSprite(game->window, game->hud->hud_sprite, NULL);
    sfRenderWindow_drawText(game->window, game->hud->pv_text, NULL);
    sfRenderWindow_drawText(game->window, game->hud->xp_text, NULL);
    sfRenderWindow_drawText(game->window, game->hud->level_text, NULL);
}