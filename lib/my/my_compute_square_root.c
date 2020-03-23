/*
** EPITECH PROJECT, 2019
** square root
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int sr = 1;
    while (sr * sr != nb) {
        if (sr * sr > nb) {
            return 0;
        }
        sr++;
    }
    return sr;
}