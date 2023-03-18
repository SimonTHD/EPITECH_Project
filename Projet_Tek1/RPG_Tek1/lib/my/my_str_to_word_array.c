/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include "my.h"

int count_substr(char const *str)
{
    int count = 0;

    for (int i = 0; i < my_strlen(str); i++) {
        if (my_is_char_alpha(str[i]) == 0) {
            count++;
        }
    }
    return (count);
}

char *get_first_word(char const *str)
{
    int i = 0;
    char *word;

    while (my_is_char_alpha(str[i]) == 1) {
        i++;
    }
    word = malloc((i + 1) * sizeof(char));
    my_strncpy(word, str, i);
    word[i] = '\0';
    return (word);
}

int get_word_size(char const *str, int i)
{
    int size = 0;

    while (my_is_char_alpha(str[i + 1]) == 1) {
        i++;
        size++;
    }
    return (size);
}

char *get_word(char const *str, int i)
{
    int size = get_word_size(str, i);
    char *word;

    word = malloc((size + 1) * sizeof(char));
    my_strncpy(word, &(str[i + 1]), size);
    word[size] = '\0';
    return (word);
}

char **my_str_to_word_array(char const *str, char delimitator)
{
    char **result = malloc((count_substr(str) + 1) * sizeof(char *));
    int count = 0;

    if (my_strlen(get_first_word(str)) != 0) {
        result[count] = get_first_word(str);
        count++;
    }
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] == delimitator && get_word_size(str, i) != 0) {
            result[count] = get_word(str, i);
            count++;
        }
    }
    result[count + 1] = 0;
    return (result);
}