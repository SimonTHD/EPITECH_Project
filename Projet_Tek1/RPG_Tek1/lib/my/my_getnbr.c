/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *str)
{
    long my_nbr = 0;
    int is_neg = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] > '9' || str[i] < '0') && str[i] != '-' && str[i] != '+')
            break;
        if (str[i] >= '0' && str[i] <= '9') {
            my_nbr += str[i] - '0';
            my_nbr *= 10;
        }
        if (str[i] == '-')
            is_neg++;
    }
    if (is_neg % 2 == 0)
        return (my_nbr/10);
    else
        return (-my_nbr/10);
}