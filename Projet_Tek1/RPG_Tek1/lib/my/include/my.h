/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** libmy header
*/

#ifndef LIBMY_
#define LIBMY_

#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>

/* Int */

void my_sort_int_array(int *array, int size);
int my_pow(int const nb, int const p);

/* Base conversion */

int my_getnbr_base(char const *str, char const *base);
int my_putnbr_base(int nbr, char const *base);

/* Strings operations */

int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
char *my_strlowcase(char *str);
char *my_strupcase(char *str);
char *my_revstr(char *str);
char **my_str_to_word_array(char const *str, char delimitator);

/* string.h */

int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_strlen(char const *str);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strcat(char *dest, char const *str);
char *my_strncat(char *dest, char const *str, int nb);

/* print */

int my_printf(char *s, ...);
void my_putchar(char c);
int my_putstr(char const *str);
int my_showstr(char const *str);
int my_put_nbr(int nb);

#endif /* LIBMY_ */