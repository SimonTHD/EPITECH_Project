/*
** EPITECH PROJECT, 2020
** check_direction
** File description:
** check_direction
*/

#include "n4s.h"

double set_direction(double mid)
{
    double direct = 0;

    if (mid < 200)
        direct = 0.57;
    if (mid >= 200)
        direct = 0.4;
    if (mid >= 400)
        direct = 0.3;
    if (mid >= 600)
        direct = 0.2;
    if (mid >= 1000)
        direct = 0.05;
    if (mid >= 1500)
        direct = 0.015;
    return (direct);
}

///////////////////////////////////////////////////////////////////////////////

int check_direction(double *lidar, char *str)
{
    double value = lidar[1] - lidar[30];
    double mid = lidar[15];
    size_t alloc = 0;

    dprintf(1, "wheels_dir:");
    if (value < 0) {
        dprintf(1, "-");
        value *= -1;
    }
    dprintf(1, "%f\n", set_direction(mid));
    getline(&str, &alloc, stdin);
    if (check_if_map_finish(str) == 1)
        return (1);
    return (SUCCESS);
}
