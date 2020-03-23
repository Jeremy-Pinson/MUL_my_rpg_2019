/*
** EPITECH PROJECT, 2019
** strupcase
** File description:
** upercase all
*/

int my_putstr(char const *str);

char *my_strlowcase(char *str)
{
    int a = 0;
    char *output = str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[a] > 'A' && str[a] < 'Z') {
            output[a] = str[a] - 32;
        }
        a++;
    }
    my_putstr(output);
    return (output);
}