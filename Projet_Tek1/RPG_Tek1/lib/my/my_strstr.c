/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** my_strstr
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int str_length = my_strlen(str);
    int to_find_length = my_strlen(to_find);

    if (to_find_length == 0)
        return (str);
    for (int i = 0; i < str_length; i++) {
        if (str[i] == to_find[0] && \
        my_strncmp(&(str[i]), to_find, to_find_length) == 0) {
            return (&(str[i]));
        }
    }
    return (NULL);
}