/*
** EPITECH PROJECT, 2019
** my_evil_str.c
** File description:
** print string reverse
*/

char *my_revstr(char const *str)
{
    int lenght = 0;
    int p = 0;
    char *sort;
    int count = 0;
    while (str[lenght] != '\0') {
        lenght++;
    }
    p = lenght;
    lenght++;
    while (lenght != 0) {
        sort[count] = str[p];
        p--;
        count++;
        lenght--;

    }
    return (sort);
}
