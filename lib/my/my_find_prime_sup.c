/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb == 0) {return 2;}
    if (nb == 1) {return 2;}
    while (my_is_prime(nb) != 1) {
        nb++;
    }
    return nb;
}