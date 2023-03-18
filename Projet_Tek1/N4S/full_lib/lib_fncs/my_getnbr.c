/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** my_getnbr
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int my_getnbr(char *str)
{
    int n = 1;
    int nbr = 0;
    int i = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            n = n * (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nbr = nbr * 10;
        nbr = nbr + (str[i] - '0');
        i++;
    }
    nbr *= n;
    return (nbr);
}