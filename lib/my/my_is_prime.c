/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int count = nb -1;
    while (count != 2) {
        count--;
        if (nb % count == 0) {
            return (0);
        }
    }
    return (1);
}