/*
** EPITECH PROJECT, 2019
** CPool_Day08_2019
** File description:
** my_str_isalpha
*/

#include "lib.h"

int my_strlen(char const *str);

int my_line_isnum(char const *str)
{
    int i = 1;

    if (my_strlen(str) == 0)
        return (i);
    for (int cnt = 0; str[cnt] != '\n'; cnt++) {
        if (str[cnt] > '9' || str[cnt] < '0') {
            i = 0;
        }
    }
    return (i);
}

///////////////////////////////////////////////////////////////////////////////

int my_str_isnum(char const *str)
{
    int i = 1;

    if (my_strlen(str) == 0)
        return (i);
    for (int cnt = 0; str[cnt] != '\0'; cnt++) {
        if (str[cnt] > '9' || str[cnt] < '0') {
            i = 0;
        }
    }
    return (i);
}