/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_game
*/

#include "game.h"
#include "save.h"

game_obj_t *init_game_obj(sfVector2i win_rez)
{
    game_obj_t *game = malloc(sizeof(game_obj_t));
    game->clock = sfClock_create();
    game->move_clock = sfClock_create();
    game->event = malloc(sizeof(sfEvent));
    game->actual_map = load_gandalf_caravane();
    game->is_play = true;
    game->talk_box = init_talk_box(win_rez);
    game->hud = init_hud(win_rez);
    if (!if_save()) {
        game->player = init_player(game->actual_map->buffer_map);
        game->quest_list = NULL;
    } else
        load_save(game);
    update_hud(game);
    init_inventory(game);
    init_tab_item(game);
    return (game);
}