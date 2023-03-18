/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** my_itoa
*/

#include "lib.h"
#include <unistd.h>
#include <stdlib.h>

char *my_itoa(long long nb)
{
    int len = get_nb_lenght(nb);
    char *result;

    result = malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    result[len] = '\0';
    while (len--) {
        result[len] = nb % 10 + '0';
        nb = nb / 10;
    }
    return (result);
}

int get_nb_lenght(long long nb)
{
    int len = 1;
    int power = 10;

    if (nb < 0)
        nb = -nb;
    while (nb >= power) {
        len++;
        if (power > 2147483647)
            break;
        power *= 10;
    }
    return (len);
}