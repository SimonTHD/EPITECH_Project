/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** my_str_islower
*/

#include "my.h"

int is_lowercase(char c)
{
    return (c >= 'a' && c <= 'z');
}

int my_str_islower(char const *str)
{
    int str_len = my_strlen(str);

    for (int i = 0; i < str_len; i++)
        if (!is_lowercase(str[i]))
            return (0);
    return (1);
}
