/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_sort_int_array
*/

void my_putchar(char c);

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    while (i != size) {
        my_putchar(array[i]);
        i++;
    }
}