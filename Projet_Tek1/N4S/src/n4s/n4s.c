/*
** EPITECH PROJECT, 2020
** AIA
** File description:
** n4s
*/

#include "n4s.h"

int array_len(char **array)
{
    int i = 0;

    while (array[i])
        i++;
    return (i);
}

///////////////////////////////////////////////////////////////////////////////

int is_float(char *str)
{
    int point = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '.' && point == 0) {
            point = 1;
            i++;
        } else if (str[i] == '.' && point == 1)
            return (0);
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
}

///////////////////////////////////////////////////////////////////////////////

double *put_str_array_in_float_array(char **lidar)
{
    double *lidar_values = malloc(sizeof(double) * array_len(lidar));
    int j = 0;

    if (lidar == NULL)
        return (NULL);
    for (int i = 0; lidar[i]; i++) {
        if (is_float(lidar[i])) {
            lidar_values[j] = atof(lidar[i]);
            j++;
        }
    }
    lidar_values[j - 1] = -1;
    lidar_values = &lidar_values[1];
    return (lidar_values);
}

///////////////////////////////////////////////////////////////////////////////

int n4s_loop(void)
{
    char **lidar = NULL;
    double *lidar_info = NULL;
    char *output = NULL;
    size_t alloc = 0;

    dprintf(1, info_lidar);
    if (getline(&output, &alloc, stdin) != -1) {
        if (check_if_map_finish(output) == 1)
            return (1);
        lidar = split_word_file(output, ':');
        lidar_info = put_str_array_in_float_array(lidar);
        check_speed(lidar_info, output);
        if (check_direction(lidar_info, output) == 1)
            return (1);
    }
    return (SUCCESS);
}

///////////////////////////////////////////////////////////////////////////////

int launch_n4s(void)
{
    if (launch_simulation() == ERROR) {
        end_simulation();
        return (ERROR);
    }
    while (1)
        if (n4s_loop() == 1)
            break;
    if (end_simulation() == ERROR)
        return (ERROR);
    return (SUCCESS);
}