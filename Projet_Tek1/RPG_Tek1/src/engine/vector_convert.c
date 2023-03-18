/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** vector_convert
*/

#include "interface.h"

sfVector2f convert_2i_to_2f(sfVector2i vector)
{
    return ((sfVector2f){(float)vector.x, (float)vector.y});
}

sfVector2i convert_2f_to_2i(sfVector2f vector)
{
    return ((sfVector2i){(int)vector.x, (int)vector.y});
}