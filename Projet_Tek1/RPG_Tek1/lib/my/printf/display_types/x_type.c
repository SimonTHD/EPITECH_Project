/*
** EPITECH PROJECT, 2019
** x_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void x_type(va_list ap, bool flags[FLAG_COUNT], __attribute__ ((unused)) \
int width, __attribute__ ((unused)) int precision)
{
    if (flags[HASH_FLAG]) {
        my_putchar('0');
        my_putchar('x');
    }
    my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
}