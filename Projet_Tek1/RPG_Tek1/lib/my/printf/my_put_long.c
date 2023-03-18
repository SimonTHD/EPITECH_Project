/*
** EPITECH PROJECT, 2019
** my_put_long
** File description:
** my_printf
*/

#include <limits.h>

void my_putchar(char c);

int my_put_long(long nb)
{
    if (nb < 0) {
        my_putchar('-');
        if (nb == LONG_MAX) {
            nb = 223372036854775808;
            my_putchar(9 + '0');
        } else {
            nb = -nb;
        }
    }
    if (nb > 9) {
        my_put_long(nb / 10);
        my_putchar(nb % 10 + '0');
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
