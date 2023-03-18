/*
** EPITECH PROJECT, 2019
** mt_putnbr_base
** File description:
** my_putnbr_base
*/

#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int base_len = my_strlen(base);
    char result[200];
    int i = 0;

    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
    }
    while (nbr > 0) {
        result[i] = base[nbr % base_len];
        nbr /= base_len;
        i++;
    }
    result[i] = '\0';
    my_revstr(result);
    if (my_strlen(result) == 0) {
        my_putchar(base[0]);
    } else {
        my_putstr(result);
    }
    return (0);
}
