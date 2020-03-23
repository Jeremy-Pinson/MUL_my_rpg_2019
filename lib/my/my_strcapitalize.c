/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_strcapitalize
*/

#include <stdbool.h>

bool my_islower(char c);

void my_putchar(char c);

int my_putstr(char const *str);

char *my_strcapitalize(char *str)
{
    int comp = my_islower(str[0]);
    if (comp == 1) {
        str[0] = (str[0] - 32);
    }
    for (int i = 0; str[i] == '\0'; i++) {
        if (str[i] == ' ') {
            str[i + 1] = (str[i + 1] - 32);
        }
    }
    my_putchar('\n');
    my_putstr(str);
    my_putchar('\n');
    return (str);
}