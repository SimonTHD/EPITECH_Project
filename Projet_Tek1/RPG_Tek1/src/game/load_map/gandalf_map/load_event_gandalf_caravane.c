/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_event_start_map
*/

#include "game.h"
#include "fight.h"

/*
l'id de l'event corespond a la lettre qui le declenchent 
sur la map de colison (a = event[0], b = event[1],)
*/

void load_event_gandalf_caravane(map_obj_t *map)
{
    map->nb_event = 1;
    map->event = malloc(sizeof(evt) * (map->nb_event + 1));
    map->event[0] = (evt)&load_camping_evt;
    map->event[1] = (evt)NULL;
}