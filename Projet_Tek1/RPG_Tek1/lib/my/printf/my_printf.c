/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include "my_flags.h"
#include "my_printf.h"
#include "types_funcs.h"

int get_params(bool *params, char *f)
{
    if (params != NULL) {
        init_params(params);
        return (get_flags(params, f, 0));
    }
    return (0);
}

int get_width(char *f, int *width)
{
    *width = (my_getnbr(f));
    return (get_digit_count(f));
}

int get_precision(char *f, int *precision)
{
    if (*f != '.')
        return (0);
    *precision = my_getnbr(&(f[1]));
    return (1 + get_digit_count(&(f[1])));
}

int print_type(char *f, va_list ap)
{
    bool *params = malloc(FLAG_COUNT * sizeof(bool));
    int params_char_count = get_params(params, f);
    int width = 0;
    int width_digit_count = get_width(&(f[params_char_count]), &width);
    int precision = 0;
    int precision_digit_count = get_precision \
    (&(f[params_char_count + width_digit_count]), &precision);
    int flag_char_count = width_digit_count + params_char_count \
    + precision_digit_count;

    if (params == NULL)
        return (0);
    for (int i = 0; i < TYPE_COUNT; i++)
        if (TYPES_FUNCS[i].c == f[flag_char_count])
            TYPES_FUNCS[i].f_ptr(ap, params, width, precision);
    free(params);
    if (f[flag_char_count] == 'l')
        flag_char_count++;
    return (flag_char_count);
}

int my_printf(char *s, ...)
{
    va_list ap;
    char *tmp;
    bool free_needed = false;

    va_start(ap, s);
    for (int i = 0; i < my_strlen(s); i++) {
        if (s[i] != '\0' && s[i] != '%')
            my_putchar(s[i]);
        if (s[i] == '%' && s[i + 1] == 'l' && s[i + 2] == 'd') {
            free_needed = true;
            tmp = my_strdup(&(s[i + 2]));
            tmp[0] = 'l';
            i += print_type(tmp, ap) + 1;
        } else if (s[i] == '%' && s[i - 1] != '\\')
            i += print_type(&(s[i + 1]), ap) + 1;
    }
    if (free_needed)
        free(tmp);
    va_end(ap);
    return (0);
}