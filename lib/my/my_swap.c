/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** swap 2 int
*/

int my_swap(int *a, int *b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;
}