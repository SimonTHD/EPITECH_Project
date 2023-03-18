/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_player
*/

#include "game.h"

anim_obj_t *init_anim_player(void)
{
    anim_obj_t *anim = malloc(sizeof(anim_obj_t));
    anim->nb_of_frame = 3;
    anim->width_height_frame = (sfVector2i){28, 36};
    anim->frame = 0;
    anim->sprite_sheet = sfTexture_createFromFile\
    ("assets/game/sprite_sheet/player.png", NULL);
    anim->sprite_one_frame = sfSprite_create();
    sfSprite_setTexture(anim->sprite_one_frame, anim->sprite_sheet, sfFalse);
    sfSprite_setTextureRect(anim->sprite_one_frame, (sfIntRect)\
    {0, 0, anim->width_height_frame.x, anim->width_height_frame.x});
    return (anim);
}

player_t *init_player(char ** map_colision)
{
    player_t *player = malloc(sizeof(player_t));
    sfVector2i player_pos = scan_playerpos(map_colision);
    player->anim_obj = init_anim_player();
    sfSprite_setPosition(player->anim_obj->sprite_one_frame, \
    (sfVector2f){player_pos.x * 4 - 10, player_pos.y * 4 - 16});
    player->direction = STAY;
    player->lvl = 1;
    player->atq = 1;
    player->def = 1;
    player->max_pv = 10;
    player->pv = 10;
    player->xp = 0;
    player->last_action_id = 0;
    player->next_lvl_100 = 0;
    return (player);
}