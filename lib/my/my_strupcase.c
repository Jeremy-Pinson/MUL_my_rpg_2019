/*
** EPITECH PROJECT, 2019
** strupcase
** File description:
** upercase all
*/

char *my_strupcase(char *str)
{
    int a = 0;
    char *output = str;
    for (int i = 0; str[i] != '\0'; i++); {
        if (str[a] > 'a' && str[a] < 'z') {
            output[a] = str[a] - 32;
        }
        a++;
    }
    return (output);
}