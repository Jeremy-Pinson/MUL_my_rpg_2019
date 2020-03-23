/*
** EPITECH PROJECT, 2019
** my_showstr
** File description:
** show unprintable char
*/

void my_putchar(char c);

int my_showstr(char const *str)
{
    char *hexa = "0123456789abcdef";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 32 && str[i] < 127) {
            my_putchar(str[i]);
        }
        else {
            my_putchar(92);
            my_putchar(hexa[(str[i]/16)]);
            my_putchar(hexa[(str[i]%16)]);

        }
    }
    return 0;
}