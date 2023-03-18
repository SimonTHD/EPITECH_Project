/*
** EPITECH PROJECT, 2020
** PSU_my_exec_2019
** File description:
** my_str_to_word_array
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_character(char c)
{
    if (c > 32 && c < 127)
        return (1);
    return (0);
}

///////////////////////////////////////////////////////////////////////////////

int get_nb_words(char *str)
{
    int nb_words = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_character(str[i]) == 1 && is_character(str[i + 1]) != 1)
            nb_words++;
    }
    return (nb_words);
}

///////////////////////////////////////////////////////////////////////////////

int get_word_len(char *str, int i)
{
    for (; str[i]; i++) {
        if (is_character(str[i]) != 1)
            return (i);
    }
    return (i);
}

///////////////////////////////////////////////////////////////////////////////

char **my_argv_to_word_array(char *str)
{
    int nb_words = get_nb_words(str);
    char **tab = malloc(sizeof(char *) * (nb_words + 1));
    int a = 0;
    int b = 0;
    int c = 0;

    while (a < nb_words) {
        c = 0;
        tab[a] = malloc(sizeof(char) * (get_word_len(str, b)));
        while (str[b] != '\0' && is_character(str[b]) == 1) {
            tab[a][c] = str[b];
            c++;
            b++;
        }
        tab[a][c] = '\0';
        a++;
        b++;
    }
    return (tab);
}