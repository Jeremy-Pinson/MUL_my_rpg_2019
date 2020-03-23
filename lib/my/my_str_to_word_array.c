/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include <stdlib.h>

int count_sep(char *str, char sep)
{
    int count = 0;
    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] == sep) {
            count++;
        }
    }
    return count;
}

char **my_str_to_word_array(char *str, char sep)
{
    int count = 0;
    int array_pos = 1;

    count = count_sep(str, sep);
    char **array = malloc(sizeof(char *) * (count + 2));
    array[0] = str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == sep) {
            str[i] = '\0';
            i++;
            array[array_pos] = &str[i];
            array_pos ++;
        }
    }
    array[array_pos] = NULL;
    return array;
}
