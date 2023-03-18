/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** my_str_isupper
*/

#include "my.h"

int is_alpha_lowercase(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int my_str_isupper(char const *str)
{
    int str_len = my_strlen(str);

    for (int i = 0; i < str_len; i++)
        if (!is_alpha_lowercase(str[i]))
            return (0);
    return (1);
}
