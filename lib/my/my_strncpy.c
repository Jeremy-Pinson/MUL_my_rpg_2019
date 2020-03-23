/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** cpy addr of
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int count = 0;
    while (count != n) {
        if (src[count] != '\0')
            dest[count] = src[count];
        else {
            dest[count] = '\0';
        }
        count++;
    }
    dest[count] = '\0';
    return dest;
}