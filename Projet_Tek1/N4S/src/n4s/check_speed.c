/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** check_speed
*/

#include "n4s.h"

double set_speed(double middle)
{
    double value = 0;

    if (middle < 500)
        value = 0.13;
    if (middle >= 500)
        value = 0.28;
    if (middle >= 1000)
        value = 0.4;
    if (middle >= 1500)
        value = 0.7;
    if (middle >= 2000)
        value = 1;
    return (value);
}

///////////////////////////////////////////////////////////////////////////////

int check_speed(double *lidar, char *str)
{
    double middle = lidar[15];
    size_t alloc = 0;

    dprintf(1, "car_forward:");
    dprintf(1, "%f\n", set_speed(middle));
    getline(&str, &alloc, stdin);
    return (0);
}
