/*
** EPITECH PROJECT, 2019
** p_flag
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"

void my_print_ptr(unsigned int ptr)
{
    my_putchar('0');
    my_putchar('x');
    my_putnbr_base(ptr, "0123456789abcdef");
}

void p_type(va_list ap, __attribute__ ((unused)) bool flags[FLAG_COUNT], \
__attribute__ ((unused)) int width, __attribute__ ((unused)) int precision)
{
    my_print_ptr(va_arg(ap, unsigned int));
}