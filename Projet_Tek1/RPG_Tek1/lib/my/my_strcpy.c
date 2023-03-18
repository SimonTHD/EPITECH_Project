/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** my_strcpy
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; i <= my_strlen(src); i++)
        dest[i] = src[i];
    return (dest);
}