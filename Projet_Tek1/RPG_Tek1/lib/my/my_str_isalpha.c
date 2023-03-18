/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** my_str_isalpha
*/

#include "my.h"

int is_alphabetical(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int my_str_isalpha(char const *str)
{
    int str_length = my_strlen(str);

    for (int i = 0; i < str_length; i++)
        if (!is_alphabetical(str[i]))
            return (0);
    return (1);
}
