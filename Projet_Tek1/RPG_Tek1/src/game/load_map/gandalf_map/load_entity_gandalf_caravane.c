/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_entity_start_map
*/

#include "game.h"

void load_entity_gandalf_caravane(map_obj_t *map)
{
    int nb_entity = 0;
    map->entity = malloc(sizeof(entity_t) * (nb_entity + 1));

    map->entity[0] = (entity_t *)NULL;
}