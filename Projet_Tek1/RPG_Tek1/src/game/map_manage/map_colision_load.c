/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** map_colision_load
*/

#include "game.h"
#include <string.h>
#include "my.h"

char **load_collision_map(char *map_link)
{
    char **map_col = NULL;
    int verif;
    size_t read_s = 0;
    char *buffer = NULL;
    FILE *f = fopen(map_link, "r");
    if (!f)
        exit(84);
    for (int i = 0; (verif = getline(&buffer, &read_s, f)) > -1; i++) {
        if (verif == -1)
            exit(84);
        map_col = (char **)realloc(map_col, sizeof(char *) * (i + 2));
        map_col[i] = my_strdup(buffer);
        map_col[i + 1] = NULL;
    }
    if (buffer)
        free(buffer);
    fclose(f);
    return (map_col);
}