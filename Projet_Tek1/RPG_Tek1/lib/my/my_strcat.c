/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *str)
{
    int dest_len = my_strlen(dest);
    int str_len = my_strlen(str);

    if (str_len == 0) {
        return (dest);
    }
    if (dest_len == 0) {
        my_strcpy(dest, str);
        return (dest);
    }
    for (int i = dest_len; i < dest_len + str_len + 2; i++) {
        dest[i] = str[i - dest_len];
    }
    dest[dest_len + str_len + 1] = '\0';
    return (dest);
}