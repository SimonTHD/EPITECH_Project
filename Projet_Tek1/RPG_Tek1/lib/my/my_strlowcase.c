/*
** EPITECH PROJECT, 2019
** my_strlowcase
** File description:
** my_strlowcase
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int str_len = my_strlen(str);

    for (int i = 0; i < str_len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
    return (str);
}