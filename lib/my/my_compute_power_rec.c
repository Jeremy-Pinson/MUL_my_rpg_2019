/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** sqrt recursive fonction
*/

int my_compute_power_rec(int nbr, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    nbr = nbr * my_compute_power_rec(nbr, p -1);
    return nbr;
}