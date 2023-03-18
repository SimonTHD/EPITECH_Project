/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** update_hud
*/

#include "game.h"

void update_text_hud(game_obj_t *game)
{
    char *pv_str = malloc(8);
    char *xp_str = malloc(10);
    char *lvl_str = malloc(3);
    sprintf(pv_str, "%d / %d", game->player->pv, game->player->max_pv);
    sprintf(xp_str, "%d %%", game->player->next_lvl_100);
    sprintf(lvl_str, "%d", game->player->lvl);
    sfText_setString(game->hud->pv_text, pv_str);
    sfText_setString(game->hud->xp_text, xp_str);
    sfText_setString(game->hud->level_text, lvl_str);
}

void update_hud(game_obj_t *game)
{
    player_t *player = game->player;
    hud_t *hud = game->hud;
    float pv_lenght = (float)player->pv * hud->max_pv_rect.width \
/ player->max_pv;
    float xp_lenght = (float)((float)player->next_lvl_100 / 100 * \
(float)hud->max_pv_rect.width);
    sfIntRect pv_rect = hud->max_pv_rect;
    sfIntRect xp_rect = hud->max_xp_rect;
    pv_rect.width = pv_lenght;
    xp_rect.width = xp_lenght;
    sfSprite_setTextureRect(hud->pv_bar_sprite, pv_rect);
    sfSprite_setTextureRect(hud->xp_bar_sprite, xp_rect);
    update_text_hud(game);
}