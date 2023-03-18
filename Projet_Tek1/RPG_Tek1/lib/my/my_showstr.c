/*
** EPITECH PROJECT, 2019
** my_showstr
** File description:
** my_showstr
*/

#include "my.h"

int my_abs(int nb)
{
    if (nb >= 0)
        return (nb);
    return (-nb);
}

int my_putnbr_base_octal(unsigned int nbr, char const *base)
{
    int base_len = my_strlen(base);
    char *result = malloc(my_abs(nbr) * base_len * sizeof(char));
    int i = 0;

    while (nbr > 0) {
        result[i] = base[nbr % base_len];
        nbr /= base_len;
        i++;
    }
    result[i] = '\0';
    if (my_strlen(result) < 3)
        my_putchar('0');
    if (my_strlen(result) < 2)
        my_putchar('0');
    my_putstr(my_revstr(result));
    free(result);
    return (0);
}

int is_char_printable(char c)
{
    if (c >= 32 && c < 127) {
        return (1);
    }
    return (0);
}

int my_showstr(char const *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (is_char_printable(str[i]) == 0) {
            my_putchar('\\');
            my_putnbr_base_octal((int) str[i], "01234567");
        } else {
            my_putchar(str[i]);
        }
    }
    return (0);
}
