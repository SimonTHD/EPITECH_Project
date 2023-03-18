/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** my_putstr
*/

#include "my_printf.h"

int my_putnstr(char const *str, int n)
{
    int i = 0;

    if (n < 0)
        n = INT_MAX;
    while (str[i] != '\0') {
        if (n <= 0)
            return (0);
        my_putchar(str[i]);
        i++;
        n--;
    }
    return (0);
}