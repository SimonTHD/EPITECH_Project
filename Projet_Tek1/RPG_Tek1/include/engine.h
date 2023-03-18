/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** engine
*/

#ifndef ENGINE_H_
#define ENGINE_H_

#include <SFML/Window/Cursor.h>
#include <stdbool.h>

bool insidebox_detect(sfVector2f box_pos, sfVector2f box_size, \
sfVector2f player_pos, sfVector2f player_size);
sfVector2f convert_2i_to_2f(sfVector2i vector);
sfVector2i convert_2f_to_2i(sfVector2f vector);

#endif
