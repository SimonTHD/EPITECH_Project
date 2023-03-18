/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** Task06
*/

int my_strcmp(char const *s1, char const *s2)
{
    for (int ct = 0; s1[ct] != '\0' || s2[ct] != '\0'; ct++) {
        if (s1[ct] != s2[ct]) {
            return (s1[ct] - s2[ct]);
        }
    }
    return (0);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int ct = 0; ct < n; ct++) {
        if (s1[ct] != s2[ct]) {
            return (s1[ct] - s2[ct]);
        }
    }
    return (0);
}