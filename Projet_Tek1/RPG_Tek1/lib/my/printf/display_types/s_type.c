/*
** EPITECH PROJECT, 2019
** s_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void s_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision)
{
    char *str = va_arg(ap, char *);
    char filler = ' ';
    int display_size = my_strlen(str);

    if (precision == 0)
        precision--;
    else
        display_size = precision;
    if (!flags[MINUS_FLAG])
        for (int i = 0; i < width - display_size; i++)
            my_putchar(filler);
    my_putnstr(str, precision);
    if (flags[MINUS_FLAG])
        for (int i= 0; i < width - display_size; i++)
            my_putchar(filler);
}