/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_str_isupper
*/

#include <stdbool.h>

bool my_isupper(char c);

int my_str_isupper(char *str)
{
    int count = 0;
    while (str[count] != '\0') {
        if (!my_isupper(str[count])) {
            return 0;
        }
        count++;
    }
    return 1;
}