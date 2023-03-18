/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** map_load
*/

#include "game.h"
#include <string.h>

map_obj_t *load_gandalf_caravane(void)
{
    map_obj_t *map = malloc(sizeof(map_obj_t));
    map->location_map = "assets/game/map/caravane_gandalf/\
caravane_gandalf.colbox";
    map->buffer_map = load_collision_map(map->location_map);
    sfTexture *texture = sfTexture_createFromFile\
    ("assets/game/map/caravane_gandalf/caravane_gandalf.png", NULL);
    map->sprite_map = sfSprite_create();
    map->size = sfTexture_getSize(texture);
    load_event_gandalf_caravane(map);
    load_entity_gandalf_caravane(map);
    sfSprite_setTexture(map->sprite_map, texture, sfFalse);
    return (map);
}