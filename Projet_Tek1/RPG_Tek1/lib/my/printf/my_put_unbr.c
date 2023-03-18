/*
** EPITECH PROJECT, 2019
** my_put_unbr
** File description:
** my_put_unbr
*/

#include "my_printf.h"

int my_put_unbr(unsigned int nb)
{
    if (nb > 9) {
        my_put_unbr(nb / 10);
        my_putchar(nb % 10 + '0');
    } else {
        my_putchar(nb + '0');
    }
    return (0);
}
