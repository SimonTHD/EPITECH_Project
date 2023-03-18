/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** display
*/

#include "game.h"

void load_player_view(sfRenderWindow *window, sfVector2f player_pos)
{
    sfFloatRect view_rect;
    view_rect.height = 270;
    view_rect.width = 480;
    view_rect.top = 0;
    view_rect.left = 0;
    sfView *view_player = sfView_createFromRect(view_rect);
    sfView_setCenter(view_player, player_pos);
    sfRenderWindow_setView(window, view_player);
}

void load_minimap_view(sfRenderWindow *window, game_obj_t* game)
{
    sfFloatRect map_rect;
    map_rect.height = game->actual_map->size.y;
    map_rect.width = game->actual_map->size.x;
    map_rect.top = 0;
    map_rect.left = 0;
    sfView *map_view = sfView_createFromRect(map_rect);
    sfView_setViewport(map_view, (sfFloatRect){0.85f, 0.025f, 0.125f, 0.25f});
    sfRenderWindow_setView(window, map_view);
}

void draw_gameplay_view(sfRenderWindow *window, game_obj_t* game)
{
    sfVector2f pos_player = sfSprite_getPosition\
    (game->player->anim_obj->sprite_one_frame);
    load_player_view(window, pos_player);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, game->actual_map->sprite_map, NULL);
    for (int i = 0; game->actual_map->entity[i]; i++) {
        sfRenderWindow_drawSprite\
        (window, game->actual_map->entity[i]->anim->sprite_one_frame, NULL);
    }
    sfRenderWindow_drawSprite\
    (window, game->player->anim_obj->sprite_one_frame, NULL);
    sfRenderWindow_setView(window, sfRenderWindow_getDefaultView(window));
    print_hud(game);
    print_dialogue_box(game);
}

void draw_minimap_view(sfRenderWindow *window, game_obj_t* game)
{
    load_minimap_view(window, game);
    sfRenderWindow_drawSprite(window, game->actual_map->sprite_map, NULL);
    sfRenderWindow_drawSprite\
    (window, game->player->anim_obj->sprite_one_frame, NULL);
}

void print_and_display(sfRenderWindow *window, game_obj_t* game)
{
    draw_gameplay_view(window, game);
    draw_minimap_view(window, game);
    sfRenderWindow_display(window);
}