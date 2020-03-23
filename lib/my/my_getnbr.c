/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** return a number
*/

#include "../../include/my.h"

bool my_isnum(char c);

int my_getnbr(char *nbr)
{
    char nbrstr[my_strlen(nbr) + 1];
    int i = 0;
    int len;
    int multi = 1;
    int result = 0;

    my_strcpy(nbrstr, nbr);
    while (my_isnum(nbrstr[i])) {
        i++;
    }
    nbrstr[i] = '\0';
    for (int i = my_strlen(nbrstr); i != 0; i--) {
        result += (nbrstr[i - 1] - '0') * multi;
        multi = multi * 10;
    }
    return result;
}
