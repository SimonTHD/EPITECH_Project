/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** animation
*/

#include "game.h"

void is_next_frame(game_obj_t *game)
{
    if (sfClock_getElapsedTime(game->clock).microseconds > (sfInt64)200000) {
        for (int i = 0; game->actual_map->entity[i]; i++) {
            animation(game->actual_map->entity[0]->anim, \
game->actual_map->entity[0]->direction);
        }
        animation(game->player->anim_obj, game->player->direction);
        sfClock_restart(game->clock);
    }
}

void animation(anim_obj_t *anim, int direction)
{
    sfIntRect rect;
    anim->frame++;
    if (anim->frame == anim->nb_of_frame)
        anim->frame = 0;
    rect = (sfIntRect){anim->frame * anim->width_height_frame.x, direction *\
anim->width_height_frame.y, anim->width_height_frame.x, \
anim->width_height_frame.y};
    sfSprite_setTextureRect(anim->sprite_one_frame, (rect));
}