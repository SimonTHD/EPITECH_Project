/*
** EPITECH PROJECT, 2019
** flags.h
** File description:
** my_printf header
*/

#ifndef __TYPES_FUNCS__
#define __TYPES_FUNCS__

#include "my_flags.h"

const struct flag TYPES_FUNCS[] = {{'i', &i_type}, {'d', &i_type}, \
{'c', &c_type}, {'p', &p_type}, \
{'x', &x_type}, {'X', &xu_type}, \
{'b', &b_type}, {'S', &sp_type}, \
{'u', &u_type}, {'o', &o_type}, \
{'%', &percent_type}, {'s', &s_type}, \
{'l', &ld_type}};

#endif /* __TYPES_FUNCS__ */