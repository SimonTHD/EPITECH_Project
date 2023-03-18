/*
** EPITECH PROJECT, 2019
** my_hunter
** File description:
** my_itoa
*/

#include "fight.h"

int get_digit_count(int nb)
{
    int d_count = 0;

    while (nb > 9) {
        nb /= 10;
        d_count++;
    }
    return (d_count + 1);
}

char *my_itoa(int nb)
{
    char *res = malloc((get_digit_count(nb) + 1) * sizeof(char));
    int i = 0;

    if (res != NULL) {
        while (nb > 9) {
            res[i] = nb % 10 + '0';
            nb /= 10;
            i++;
        }
        res[i] = nb % 10 + '0';
        res[i + 1] = '\0';
        my_revstr(res);
    }
    return (res);
}