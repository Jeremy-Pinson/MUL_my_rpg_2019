/*
** EPITECH PROJECT, 2019
** my_evil_str.c
** File description:
** print string reverse
*/

int my_strlen(char const *str);

char my_evil_str(char const *str)
{
    int lengt = my_strlen(str) - 1;
    char dest[] = "hello";
    for (int i = 0; lengt != -1; i++) {
        dest[i] = str[lengt];
        lengt--;
    }
    return (dest);
}