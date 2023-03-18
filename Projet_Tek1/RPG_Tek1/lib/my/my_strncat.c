/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *str, int nb)
{
    int dest_len = my_strlen(dest);
    int str_len = my_strlen(str);

    if (nb < 0) {
        return (dest);
    }
    if (nb > str_len) {
        nb = str_len;
    }
    if (dest_len == 0) {
        dest_len--;
    }
    for (int i = dest_len; i < dest_len + nb + 2; i++) {
        dest[i] = str[dest_len + i + 1];
    }
    dest[dest_len + nb + 1] = '\0';
    return (dest);
}