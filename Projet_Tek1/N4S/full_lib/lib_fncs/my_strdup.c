/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_strdup
*/

#include "lib.h"
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *str = malloc(sizeof(char) * (my_strlen(src) + 1));
    int i = 0;

    for (; (i != my_strlen(src)) != '\0'; i++)
        str[i] = src[i];
    str[i] = '\0';
    return (str);
}