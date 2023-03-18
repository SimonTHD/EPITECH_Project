/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_strcpy
*/

#include <stdlib.h>
#include "lib.h"

char *my_strcpy(char const *src)
{
    int i = 0;
    char *cpy = malloc(sizeof(char) * my_strlen(src) + 1);

    for (; src[i]; i++)
        cpy[i] = src[i];
    cpy[i + 1] = '\0';
    return (cpy);
}