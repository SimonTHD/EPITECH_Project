/*
** EPITECH PROJECT, 2020
** split_file.c
** File description:
** split_file.c
*/
#include "n4s.h"

int word_count(char *str, char split)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == split)
            count++;
    }
    return (count + 1);
}

///////////////////////////////////////////////////////////////////////////////

char **init_my_tab(char *str, char **wordtab, char split)
{
    int count = my_strlen(str);
    int word = word_count(str, split);

    wordtab = malloc(sizeof(char *) * (word + 2));
    if (wordtab == NULL)
        return (NULL);
    for (; word >= 0; word--) {
        if ((wordtab[word] = malloc(sizeof(char) * count + 1)) == NULL)
            return (NULL);
        wordtab[word][0] = 0;
    }
    return (wordtab);
}

///////////////////////////////////////////////////////////////////////////////

char **split_word_file(char *str, char split)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **wordtab = NULL;

    wordtab = init_my_tab(str, wordtab, split);
    for (; str[i] != '\0'; i++) {
        if (str[i] == split && k != 0) {
            k = 0;
            j++;
        }
        else if (str[i] != split) {
            wordtab[j][k] = str[i];
            wordtab[j][k + 1] = 0;
            k++;
        }
    }
    if (wordtab[j][0] == 0)
        wordtab[j] = NULL;
    wordtab[j + 1] = NULL;
    return (wordtab);
}