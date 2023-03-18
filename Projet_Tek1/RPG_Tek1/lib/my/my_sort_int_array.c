/*
** EPITECH PROJECT, 2019
** my_sort_int_array
** File description:
** my_sort_int_array
*/

void sort_values(int *array)
{
    if (array[1] < array[0]) {
        int tmp = array[0];
        array[0] = array[1];
        array[1] = tmp;
    }
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            sort_values(&(array[j]));
        }
    }
}