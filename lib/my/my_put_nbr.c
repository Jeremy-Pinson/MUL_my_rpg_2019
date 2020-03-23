/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb / 10 != 0) {
        my_put_nbr(nb/10);
        my_putchar(nb % 10 + '0');
    }
    if (nb < 10) {
        my_putchar(nb + '0');
    }
    return 0;
}