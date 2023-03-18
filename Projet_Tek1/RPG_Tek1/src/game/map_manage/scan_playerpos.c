/*
** EPITECH PROJECT, 2019
** RPG
** File description:
** scan_playerpose
*/

#include "game.h"

sfVector2i scan_playerpos(char **map)
{
    static sfVector2i ppos;
    ppos = (sfVector2i){0, 0};
    for (; map[ppos.y]; ppos.x++) {
        if (map[ppos.y][ppos.x] == '\n') {
            ppos.y++;
            ppos.x = -1;
        } else if (map[ppos.y][ppos.x] == 'X')
            return (ppos);
    }
    return ppos;
}