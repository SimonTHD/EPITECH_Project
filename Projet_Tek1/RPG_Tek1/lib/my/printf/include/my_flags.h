/*
** EPITECH PROJECT, 2019
** my_printf.h
** File description:
** my_printf header
*/

#ifndef __MY_FLAGS__
#define __MY_FLAGS__

#define MINUS_FLAG 0
#define PLUS_FLAG 1
#define SPACE_FLAG 2
#define ZERO_FLAG 3
#define HASH_FLAG 4
#define FLAG_COUNT 5
#define TYPE_COUNT 13

#include <stdarg.h>
#include <stdbool.h>

typedef const struct flag {
    char c;
    void (*f_ptr)(va_list ap, bool flags[FLAG_COUNT], int width, int precision);
} t_flag;

void c_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void i_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void p_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void x_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void xu_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void b_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void sp_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void u_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void o_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void s_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void ld_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

void percent_type(va_list ap, bool flags[FLAG_COUNT], int width, int precision);

#endif /* __MY_FLAGS__ */