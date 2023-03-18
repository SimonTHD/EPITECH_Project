/*
** EPITECH PROJECT, 2019
** ld_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void ld_type(va_list ap, bool flags[FLAG_COUNT], int width, \
__attribute__ ((unused)) int precision)
{
    long nb = va_arg(ap, long);
    char filler = ' ';
    int i = 0;

    if (nb < 0)
        i += 2;
    if (flags[PLUS_FLAG] && nb >= 0)
        i++;
    if (flags[ZERO_FLAG])
        filler = '0';
    if (!flags[MINUS_FLAG])
        for (int j = i; j < width - get_long_digits(nb); j++)
            my_putchar(filler);
    if (flags[PLUS_FLAG] && nb > 0)
        my_putchar('+');
    my_put_long(nb);
    if (flags[MINUS_FLAG])
        for (int j = i; j < width - get_long_digits(nb); j++)
            my_putchar(filler);
}