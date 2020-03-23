/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_str_isalpha
*/

#include <stdbool.h>

bool my_islower(char c);

bool my_isalpha(char c);

int my_strlen(char const *str);

int my_str_isalpha(char *str)
{
    if (my_strlen(str) == 0) {
        return 0;
    }
    int count = 0;
    while (str[count] != '\0') {
        if (!my_isalpha(str[count])) {
            return 0;
        }
        count++;
    }
    return 1;
}