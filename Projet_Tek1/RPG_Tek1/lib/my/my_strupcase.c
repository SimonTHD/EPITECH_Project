/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** my_strupcase
*/

#include "my.h"

char *my_strupcase(char *str)
{
    int str_len = my_strlen(str);

    for (int i = 0; i < str_len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    return (str);
}