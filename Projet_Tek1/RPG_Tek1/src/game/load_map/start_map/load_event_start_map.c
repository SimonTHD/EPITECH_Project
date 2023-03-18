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

void load_event_start_map(map_obj_t *map)
{
    map->nb_event = 7;
    map->event = malloc(sizeof(evt) * (map->nb_event + 1));
    map->event[0] = (evt)&quest_1;
    map->event[1] = (evt)&null_event;
    map->event[2] = (evt)&null_event;
    map->event[3] = (evt)&null_event;
    map->event[4] = (evt)&null_event;
    map->event[5] = (evt)&null_event;
    map->event[6] = (evt)&load_caravane_evt;
    map->event[7] = (evt)NULL;
}