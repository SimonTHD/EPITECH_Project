/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int str_length = my_strlen(str);

    for (int i = 0; i < str_length / 2; i++) {
        char tmp = str[i];
        str[i] = str[str_length - 1 - i];
        str[str_length - 1 - i] = tmp;
    }
    return (str);
}
