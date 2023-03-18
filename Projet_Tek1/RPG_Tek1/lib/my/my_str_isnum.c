/*
** EPITECH PROJECT, 2019
** my_str_isnum
** File description:
** my_str_isnum
*/

#include "my.h"

int is_number(char c)
{
    return (c >= '0' && c <= '9');
}

int my_str_isnum(char const *str)
{
    int str_len = my_strlen(str);

    for (int i = 0; i < str_len; i++)
        if (is_number(str[i]) == 0)
            return (0);
    return (1);
}
