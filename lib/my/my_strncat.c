/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** like oui
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);
    for (int i = 0; i != nb; i++) {
        dest[dest_len + i] = src[i];
    }
    return dest;
}