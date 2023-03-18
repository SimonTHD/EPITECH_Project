/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** simulation
*/

#include "n4s.h"

int launch_simulation(void)
{
    char *output = NULL;
    size_t alloc = 0;

    dprintf(1, start_sim);
    getline(&output, &alloc, stdin);
    if (strstr(output, ":KO:") != NULL)
        return (ERROR);
    return (SUCCESS);
}

///////////////////////////////////////////////////////////////////////////////

int end_simulation(void)
{
    char *output = NULL;
    size_t alloc = 0;

    dprintf(1, stop_sim);
    getline(&output, &alloc, stdin);
    if (strstr(output, ":KO:") != NULL)
        return (ERROR);
    return (SUCCESS);
}