/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** insidebox_detect
*/

#include <stdbool.h>
#include <SFML/Window/Cursor.h>

bool insidebox_detect(sfVector2f box_pos, sfVector2f box_size, \
sfVector2f player_pos, sfVector2f player_size)
{
    if (player_pos.x >= box_pos.x + box_size.x
        || player_pos.x + player_size.x <= box_pos.x
        || player_pos.y >= box_pos.y + box_size.y
        || player_pos.y + player_size.y <= box_pos.y)
        return (false);
    return (true);
}