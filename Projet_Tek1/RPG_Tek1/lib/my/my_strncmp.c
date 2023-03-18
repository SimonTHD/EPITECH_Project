/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** my_strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n <= 0)
        return (0);
    while (*s1 != 0 && *s2 != 0 && *s1 == *s2 && i < n - 1) {
        s1++;
        s2++;
        i++;
    }
    return (*s1 - *s2);
}