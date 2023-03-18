/*
** EPITECH PROJECT, 2019
** my_pow.c
** File description:
** libmy my_pow
*/

int my_int_is_max(int sign, int a, int b)
{
    long cmp = a + b;

    if (sign == 1 && (a < 0 || cmp > 2147483647))
        return (1);
    else if (sign == -1 && cmp < -2147483648)
        return (1);
    return (0);
}

int special_case(int nb, int p, int *result)
{
    if (p < 0) {
        *result = 0;
        return (1);
    }
    if (p == 0) {
        *result = 1;
        return (1);
    }
    if ((nb == 2147483647 || nb == -2147483648) && p > 1) {
        *result = (0);
        return (1);
    }
    return (0);
}

int my_pow(int const nb, int const p)
{
    int result = 1;
    int sign = 1;

    if (special_case(nb, p, &result) == 1)
        return (result);
    if (nb < 0)
        sign = 0;
    for (int i = 0; i < p; i++) {
        if (my_int_is_max(sign, result * nb, nb))
            return (0);
        result *= nb;
    }
    return (result);
}