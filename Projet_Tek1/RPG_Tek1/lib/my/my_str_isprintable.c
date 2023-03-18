/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** my_str_isprintable
*/

#include "my.h"

int is_printable(char c)
{
    return (c >= 32 && c < 127);
}

int my_str_isprintable(char const *str)
{
    int str_len = my_strlen(str);

    for (int i = 0; i < str_len; i++)
        if (!is_printable(str[i]))
            return (0);
    return (1);
}