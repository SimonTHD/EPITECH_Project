/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdbool.h>
#include "my_flags.h"
#include "my_printf.h"

bool is_char_num(char c)
{
    return (c >= '0' && c <= '9');
}

int get_digit_count(char *str)
{
    int count = 0;

    while (is_char_num(str[count]))
        count++;
    return (count);
}

bool is_char_flag(char c)
{
    return (c == '-' || c == '+' || c == ' ' || c == '0' || c == '#');
}

void init_params(bool *params)
{
    for (int i = 0; i < FLAG_COUNT; i++)
        params[i] = false;
}

int get_flags(bool *params, char *f, int count)
{
    if (!is_char_flag(*f) || count > 5)
        return (count);
    if (*f == '-')
        params[MINUS_FLAG] = true;
    if (*f == ' ')
        params[SPACE_FLAG] = true;
    if (*f == '+')
        params[PLUS_FLAG] = true;
    if (*f == '0')
        params[ZERO_FLAG] = true;
    if (*f == '#')
        params[HASH_FLAG] = true;
    count++;
    return (get_flags(params, &(f[count]), count));
}