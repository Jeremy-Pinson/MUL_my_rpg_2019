/*
** EPITECH PROJECT, 2019
** strisprintable
** File description:
** my_str_isprintable
*/

#include <stdbool.h>

bool my_str_isprintable(char const *str)
{
    int count = 0;
    while (str[count] != '\0') {
        if (str[count] < 32 || str[count] > 127) {
            return 0;
        }
        count++;
    }
    return 1;
}