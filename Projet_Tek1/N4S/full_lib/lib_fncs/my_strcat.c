/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concat two strings
*/

#include <unistd.h>
#include <stdlib.h>

char *my_strcat(char *result, char *dest)
{
    int i = 0;
    int j = 0;
    char *forward;

    for (i = 0; result[i]; i++);
    for (j = 0; dest[j]; j++);
    forward = malloc(sizeof(char) * (i + j + 1));
    if (forward == NULL)
        return (NULL);
    for (i = 0; result[i]; i++)
        forward[i] = result[i];
    for (int index = 0; j != 0 && index < j; index++)
        forward[i + index] = dest[index];
    forward[i + j] = '\0';
    return (forward);
}

///////////////////////////////////////////////////////////////////////////////

char *my_strncat(char *result, char *dest, int size)
{
    int i = 0;
    int cpt = 0;
    char *forward;

    for (i = 0; result[i]; i++);
    forward = malloc(sizeof(char) * (i + size + 1));
    if (forward == NULL)
        return (NULL);
    for (i = 0; result[i]; i++)
        forward[i] = result[i];
    while (size != 0 && cpt < size) {
        forward[i + cpt] = dest[cpt];
        cpt++;
    }
    forward[i + size] = '\0';
    return (forward);
}
