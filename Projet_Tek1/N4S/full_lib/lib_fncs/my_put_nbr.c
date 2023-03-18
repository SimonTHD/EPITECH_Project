/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** Task07
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int a = nb;

    if (a < 0) {
        a = a * -1;
        my_putchar('-');
    }
    if (a > 9) {
        my_put_nbr(a / 10);
        my_putchar(a % 10 + '0');
    } else {
        my_putchar(a + '0');
    }
    return (0);
}