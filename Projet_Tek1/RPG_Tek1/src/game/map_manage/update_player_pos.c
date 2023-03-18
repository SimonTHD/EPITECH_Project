/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** update_player_pos
*/

#include "game.h"

void update_player_pos(game_obj_t *game)
{
    sfVector2i player_pos = scan_playerpos(game->actual_map->buffer_map);
    game->actual_map->buffer_map[player_pos.y][player_pos.x] = '0';
    player_pos = convert_2f_to_2i(sfSprite_getPosition\
    (game->player->anim_obj->sprite_one_frame));
    game->actual_map->buffer_map[(player_pos.y + 16) / 4]\
    [(player_pos.x + 10) / 4] = 'X';
}