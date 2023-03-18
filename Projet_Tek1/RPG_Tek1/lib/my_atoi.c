/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_atoi
*/

#include "my.h"

int my_atoi(char const *str)
{
    int res = 0;

    if (!my_str_isnum(str))
        return (-1);
    for (int i = 0; str[i] != 0; i++)
        res *= 10 + (str[i] - '0');
    return (res);
}