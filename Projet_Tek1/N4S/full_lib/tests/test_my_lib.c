/*
** EPITECH PROJECT, 2020
** test_lib
** File description:
** test_for_lib
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "lib.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_str_isnum, backslash_n_string)
{
    char *str = "\n";

    cr_assert_eq(my_str_isnum(str), 0);
}

Test(my_str_isnum, empty_string)
{
    char *str = "";

    cr_assert_eq(my_str_isnum(str), 1);
}

Test(my_str_isnum, num_string)
{
    char *str = "1258475";

    cr_assert_eq(my_str_isnum(str), 1);
}

Test(my_str_isnum, letter_string)
{
    char *str = "azerty1\n";

    cr_assert_eq(my_str_isnum(str), 0);
}

Test(my_getnbr, with_signs)
{
    char *str = "++-+28";

    cr_assert_eq(my_getnbr(str), -28);
}

Test(is_character, is_a_true_char)
{
    char c = 'a';
    cr_assert_eq(is_character(c), 1);
}

Test(is_character, is_a_double_point)
{
    char c = ':';
    cr_assert_eq(is_character(c), 1);
}

Test(get_nb_words, normal_number_of_world)
{
    char *str = "Alban is thinking it's bouclinfing";
    cr_assert_eq(get_nb_words(str), 5);
}

Test(my_putchar, print_char, .init = redirect_all_std)
{
    char c = '/';
    my_putchar(c);
    cr_assert_stdout_eq_str("/");
}

Test(my_strcmp, ok_and_ko)
{
    char *ko = "KO";
    char *ok = "OK";

    cr_assert_eq(my_strcmp(ko, ok), -4);
}

Test(my_strcmp, reverse_ko)
{
    char *ko = "OK";
    char *ok = "KO";

    cr_assert_eq(my_strcmp(ko, ok), 4);
}

Test(my_strcmp, same_ok)
{
    char *ko = "OK";
    char *ok = "OK";

    cr_assert_eq(my_strcmp(ko, ok), 0);
}