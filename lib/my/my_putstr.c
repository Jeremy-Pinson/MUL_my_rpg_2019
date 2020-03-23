/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** print string
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int lenght = 0;
    while (str[lenght] != '\0') {
        my_putchar(str[lenght]);
        lenght++;
    }
    lenght++;
    return lenght;
}