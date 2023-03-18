/*
** EPITECH PROJECT, 2019
** u_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void u_type(va_list ap, bool flags[FLAG_COUNT], int width, \
__attribute__ ((unused)) int precision)
{
    unsigned int nb = va_arg(ap, unsigned int);
    char filler = ' ';
    int i = 0;

    if (flags[PLUS_FLAG])
        i++;
    if (flags[ZERO_FLAG])
        filler = '0';
    if (!flags[MINUS_FLAG])
        for (int j = i; j < width - get_int_digits(nb); j++)
            my_putchar(filler);
    if (flags[PLUS_FLAG])
        my_putchar('+');
    my_put_unbr(nb);
    if (flags[MINUS_FLAG])
        for (int j = i; j < width - get_int_digits(nb); j++)
            my_putchar(filler);
}