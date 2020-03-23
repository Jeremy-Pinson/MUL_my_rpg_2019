/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_isneg
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0) {
        my_putchar('P');
        return 1;
    }
    else {
        my_putchar('N');
        return 0;
    }
}