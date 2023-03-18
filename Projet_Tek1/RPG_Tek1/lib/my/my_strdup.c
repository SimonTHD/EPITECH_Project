/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** my_strdup
*/

#include "my.h"

char *my_strdup(char const *src)
{
    char *str_dup = malloc((my_strlen(src) + 1) * sizeof(char));
    my_strcpy(str_dup, src);
    return (str_dup);
}