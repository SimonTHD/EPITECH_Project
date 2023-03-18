/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_camping
*/

#include "game.h"
#include "my.h"
#include "fight.h"

int load_camping_evt(game_obj_t *game)
{
    game->actual_map = load_start_map();
    sfVector2i player_pos = scan_playerpos(game->actual_map->buffer_map);
    sfSprite_setPosition(game->player->anim_obj->sprite_one_frame, \
    (sfVector2f){player_pos.x * 4 - 10, player_pos.y * 4 - 16});
    return (0);
}