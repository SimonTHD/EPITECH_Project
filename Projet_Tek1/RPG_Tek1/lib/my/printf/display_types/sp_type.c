/*
** EPITECH PROJECT, 2019
** sp_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void sp_type(va_list ap, __attribute__ ((unused)) bool flags[FLAG_COUNT], \
__attribute__ ((unused)) int width, __attribute__ ((unused)) int precision)
{
    my_showstr(va_arg(ap, char *));
}