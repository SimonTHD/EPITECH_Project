/*
** EPITECH PROJECT, 2019
** i_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void i_type(va_list ap, bool flags[FLAG_COUNT], int width, \
__attribute__ ((unused)) int precision)
{
    int nb = va_arg(ap, int);
    char filler = ' ';
    int i = 0;

    if (nb < 0)
        i += 2;
    if (flags[PLUS_FLAG] && nb >= 0)
        i++;
    if (flags[ZERO_FLAG])
        filler = '0';
    if (!flags[MINUS_FLAG])
        for (int j = i; j < width - get_int_digits(nb); j++)
            my_putchar(filler);
    if (flags[PLUS_FLAG] && nb > 0)
        my_putchar('+');
    my_put_nbr(nb);
    if (flags[MINUS_FLAG])
        for (int j = i; j < width - get_int_digits(nb); j++)
            my_putchar(filler);
}