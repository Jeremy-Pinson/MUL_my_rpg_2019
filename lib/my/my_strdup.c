/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int i = 0;
    char *str = malloc(sizeof(char) * my_strlen(src) + 1);
    for (0; i < my_strlen(src); i++) {
        str[i] = src[i];
    }
    str[i + 1] = '\0';
    return str;
}
