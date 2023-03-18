/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** move_handling
*/

#include "game.h"
#include "my.h"

void apply_move(int sprite, sfVector2f move_or, char *arround, game_obj_t *game)
{
    if (arround[sprite] == '0') {
        sfSprite_move(game->player->anim_obj->sprite_one_frame, move_or);
        game->player->direction = sprite;
    } else if (is_alphabetical(arround[sprite])) {
        game->actual_map->event[arround[sprite] - 'a'](game);
        update_hud(game);
    }
}

char *get_arround_evt(map_obj_t *map)
{
    sfVector2i player_pos = scan_playerpos(map->buffer_map);
    char *arround = malloc(sizeof(char) * 5);
    arround[WALK_DOWN] = map->buffer_map[player_pos.y + 1][player_pos.x];
    arround[WALK_UP] = map->buffer_map[player_pos.y - 1][player_pos.x];
    arround[WALK_RIGHT] = map->buffer_map[player_pos.y][player_pos.x + 1];
    arround[WALK_LEFT] = map->buffer_map[player_pos.y][player_pos.x - 1];
    arround[4] = 0;
    return (arround);
}

float compute_speed(game_obj_t *game)
{
    sfInt32 buff = sfTime_asMilliseconds(sfClock_getElapsedTime\
    (game->move_clock));
    sfClock_restart(game->move_clock);
    return (0.1 * buff);
}

void move_player(game_obj_t *game)
{
    static char *arround_evt;
    arround_evt = get_arround_evt(game->actual_map);
    static float speed;
    speed = compute_speed(game);
    game->player->direction = STAY;
    if (sfKeyboard_isKeyPressed(sfKeyLShift))
        speed *= 2;
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        apply_move(WALK_UP, (sfVector2f){0, 0 - speed}, arround_evt, game);
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        apply_move(WALK_DOWN, (sfVector2f){0, speed}, arround_evt, game);
    if (sfKeyboard_isKeyPressed(sfKeyRight))
        apply_move(WALK_RIGHT, (sfVector2f){speed, 0}, arround_evt, game);
    if (sfKeyboard_isKeyPressed(sfKeyLeft))
        apply_move(WALK_LEFT, (sfVector2f){0 - speed, 0}, arround_evt, game);
}