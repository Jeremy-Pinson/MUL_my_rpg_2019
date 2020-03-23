/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_str_islower
*/

#include <stdbool.h>

bool my_islower(char c);

int my_str_islower(char *str)
{
    int count = 0;
    while (str[count] != '\0') {
        if (!my_islower(str[count])) {
            return 0;
        }
        count++;
    }
    return 1;
}