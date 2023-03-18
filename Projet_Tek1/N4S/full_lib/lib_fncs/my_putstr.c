/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Task02
*/

#include <unistd.h>
#include "lib.h"

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    return (0);
}

int my_putstr_boosted(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}