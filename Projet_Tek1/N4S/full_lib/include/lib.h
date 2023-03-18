/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** lib
*/

#ifndef LIB_H_
#define LIB_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

/*==================================================
=               Casual Functions Lib               =
==================================================*/

//*Strncmp used to compare 2 strings
//*If {=0}, strings are same. Else, strings are differents.
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);

//*Strncat used to concatenate dest into result of size size
char *my_strncat(char *result, char *dest, int size);

//*Cleanstr Project Functions: Used to clear a str of multiple spaces or
//*unprintable characters
char *get_new_str(char *clean, char *command);
int jump_spaces(char *command, int);
char *clean_str(char *command);

//*Transform a string into a tab
//!Used to check if printable char
int is_character(char);
//!Used to get nb of words
int get_nb_words(char *);
//!Used to get words length
int get_word_len(char *str, int);
//!Transform a str into a char ** (Please change token in is_character)
char **my_argv_to_word_array(char *str);

//*Putstr Functions: Used to print a string
int my_putstr(char const *);
int my_putstr_boosted(char const *);

//*Check if a string is only num | If {=0}, string isn't only num. Else, yes.
int my_str_isnum(char const *);

//*Copy a str into another
char *my_strcpy(char const *);

//*Create a new string and allocate it
char *my_strdup(char const *src);

//*Gets Len of a String
int my_strlen(char const *str);

//*Used to convert int into a char*
char *my_itoa(long long nb);
//!Getting number magnitude's order
int get_nb_lenght(long long nb);

//*Used to convert char into int (atoi system function)
int my_getnbr(char *str);

//*Print a char
void my_putchar(char c);

//*Print an int number on the terminal
int my_put_nbr(int nb);

#endif /* !LIB_H_ */
