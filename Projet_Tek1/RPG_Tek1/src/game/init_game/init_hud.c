/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_hud
*/

#include "game.h"

sfVector2f pos_to_vector(sfVector2i win_rez, float x, float y)
{
    return ((sfVector2f){(float)x * win_rez.x / 100, (float)y * \
win_rez.y / 100});
}

void rescale_hud(hud_t *hud, sfVector2i win_rez)
{
    sfSprite_setScale(hud->hud_sprite, (sfVector2f){(float)win_rez.x / 921, \
(float)win_rez.y / 518});
    sfSprite_setScale(hud->pv_bar_sprite, (sfVector2f){(float)win_rez.x / 921, \
(float)win_rez.y / 518});
    sfSprite_setScale(hud->xp_bar_sprite, (sfVector2f){(float)win_rez.x / 921, \
(float)win_rez.y / 518});
}

void init_sprite_hud(hud_t *hud, sfVector2i win_rez)
{
    sfTexture *txtr_hud = sfTexture_createFromFile\
("assets/game/texture/hud.png", NULL);
    sfTexture *txtr_pv_bar = sfTexture_createFromFile\
("assets/game/texture/pv_bar.png", NULL);
    sfTexture *txtr_xp_bar = sfTexture_createFromFile\
("assets/game/texture/xp_bar.png", NULL);
    hud->hud_sprite = sfSprite_create();
    hud->xp_bar_sprite = sfSprite_create();
    hud->pv_bar_sprite = sfSprite_create();
    sfSprite_setTexture(hud->hud_sprite, txtr_hud, sfFalse);
    sfSprite_setTexture(hud->xp_bar_sprite, txtr_xp_bar, sfFalse);
    sfSprite_setTexture(hud->pv_bar_sprite, txtr_pv_bar, sfFalse);
    sfSprite_setPosition(hud->hud_sprite, pos_to_vector(win_rez, 0.5, -4));
    sfSprite_setPosition(hud->pv_bar_sprite, pos_to_vector(win_rez, 6.9, 8.2));
    sfSprite_setPosition(hud->xp_bar_sprite, pos_to_vector(win_rez, 6.9, 13));
    rescale_hud(hud, win_rez);
}

void set_position_hud(hud_t *hud, sfVector2i win_rez)
{
    sfText_setPosition(hud->pv_text, pos_to_vector(win_rez, 12, 7.5));
    sfText_setPosition(hud->xp_text, pos_to_vector(win_rez, 12.5, 12.2));
    sfText_setPosition(hud->level_text, pos_to_vector(win_rez, 8, 15.8));
}

hud_t *init_hud(sfVector2i win_rez)
{
    hud_t *hud = malloc(sizeof(hud_t));
    init_sprite_hud(hud, win_rez);
    hud->max_pv_rect = sfSprite_getTextureRect(hud->pv_bar_sprite);
    hud->max_xp_rect = sfSprite_getTextureRect(hud->xp_bar_sprite);
    sfFont *font = sfFont_createFromFile("assets/game/wendy.ttf");
    hud->pv_text = sfText_create();
    hud->xp_text = sfText_create();
    hud->level_text = sfText_create();
    sfText_setFont(hud->pv_text, font);
    sfText_setFont(hud->xp_text, font);
    sfText_setFont(hud->level_text, font);
    sfText_setCharacterSize(hud->pv_text, 25 / (float)\
((float)1080 / win_rez.y));
    sfText_setCharacterSize(hud->xp_text, 25 / (float)\
((float)1080 / win_rez.y));
    sfText_setCharacterSize(hud->level_text, 25 / (float)\
((float)1080 / win_rez.y));
    set_position_hud(hud, win_rez);
    return (hud);
}