/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compare lenhgt
*/

int my_strcmp(char const *s1, char const *s2)
{
    int t1 = 0;
    int t2 = 0;
    for (int i = 0; s1[i] != '\0'; i++) {
        t1 += s1[i];
    }
    for (int i = 0; s2[i] != '\0'; i++) {
        t2 += s2[i];
    }
    return (t1 - t2);
}