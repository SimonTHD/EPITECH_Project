/*
** EPITECH PROJECT, 2019
** c_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void c_type(va_list ap, __attribute__ ((unused)) bool flags[FLAG_COUNT], \
__attribute__ ((unused)) int width, __attribute__ ((unused)) int precision)
{
    my_putchar((char) va_arg(ap, int));
}