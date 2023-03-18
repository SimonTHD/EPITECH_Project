/*
** EPITECH PROJECT, 2019
** get_int_digits
** File description:
** my_printf
*/

int get_long_digits(long nb)
{
    int count = 1;

    while (nb > 9) {
        nb /= 10;
        count++;
    }
    return (count);
}

int get_int_digits(int nb)
{
    int count = 1;

    while (nb > 9) {
        nb /= 10;
        count++;
    }
    return (count);
}