/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** print string
*/

void my_putchar_error(char c);

int my_putstr_error(char const *str)
{
    int lenght = 0;
    while (str[lenght] != '\0') {
        my_putchar_error(str[lenght]);
        lenght++;
    }
    lenght++;
    return lenght;
}