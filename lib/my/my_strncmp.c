/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compare lenhgt
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int t1 = 0;
    int t2 = 0;
    int bouclea = n;
    int boucleb = n;
    for (int i = 0; bouclea != 0; i++) {
        t1 += s1[i];
        bouclea--;
    }
    for (int i = 0; boucleb != 0; i++) {
        t2 += s2[i];
        boucleb--;
    }
    return (t1 - t2);
}