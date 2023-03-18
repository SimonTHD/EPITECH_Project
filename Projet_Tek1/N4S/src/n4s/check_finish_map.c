/*
** EPITECH PROJECT, 2020
** finish map
** File description:
** for project N4S
*/

#include "n4s.h"

int check_if_map_finish(char *str)
{
    char *output = NULL;
    size_t alloc = 0;

    if (strstr(str, "Track Cleared") != NULL) {
        dprintf(1, "car_forward:0.00\n");
        getline(&output, &alloc, stdin);
        return (1);
    }
    return (0);
}
