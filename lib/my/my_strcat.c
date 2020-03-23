/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** add two string
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    for (int i = 0; src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }
    return dest;
}