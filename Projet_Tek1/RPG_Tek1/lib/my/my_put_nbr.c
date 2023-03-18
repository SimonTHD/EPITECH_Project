/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        if (nb == -2147483648) {
            nb = 147483648;
            my_putchar('2'+nb);
        }
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else {
        my_putchar(nb+'0');
    }
    return (0);
}
