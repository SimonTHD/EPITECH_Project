/*
** EPITECH PROJECT, 2019
** xu_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void xu_type(va_list ap, bool flags[FLAG_COUNT], __attribute__ ((unused)) \
int width, __attribute__ ((unused)) int precision)
{
    if (flags[HASH_FLAG]) {
        my_putchar('0');
        my_putchar('X');
    }
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}