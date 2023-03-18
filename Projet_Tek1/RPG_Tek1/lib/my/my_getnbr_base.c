/*
** EPITECH PROJECT, 2019
** my_getnbr_base.c
** File description:
** libmy my_getnbr_base
*/

#include "my.h"

int get_char_value(char c, char const *base, int base_len)
{
    for (int i = 0; i < base_len; i++)
        if (base[i] == c)
            return (i);
    return (0);
}

int my_getnbr_base(char const *str, char const *base)
{
    int base_len = 0;
    int str_len = 0;
    int result = 0;
    int p = 1;
    int sign = 1;

    if (str == NULL || base == NULL)
        return (0);
    base_len = my_strlen(base);
    str_len = my_strlen(str);
    if (str[0] == '-') {
        sign = -1;
        str++;
    }
    for (int i = str_len - 1; i >= 0; i--) {
        result += get_char_value(str[i], base, base_len) * p;
        p *= base_len;
    }
    return (result * sign);
}