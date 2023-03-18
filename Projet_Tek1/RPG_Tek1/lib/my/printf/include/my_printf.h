/*
** EPITECH PROJECT, 2019
** my_printf.h
** File description:
** my_printf
*/

#ifndef __MY_PRINTF__
#define __MY_PRINTF__

#include "my.h"

int disp_stdarg(char *s, ...);

int my_printf(char *s, ...);

int my_put_long(long nb);

int my_put_unbr(unsigned int nb);

bool is_char_num(char c);

int get_int_digits(int nb);

int get_long_digits(long nb);

int get_digit_count(char *str);

bool is_char_flag(char c);

void init_params(bool *params);

int get_flags(bool *params, char *f, int count);

int my_putnstr(char const *str, int n);

#endif /* __MY_PRINTF__ */