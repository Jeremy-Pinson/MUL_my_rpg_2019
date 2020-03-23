/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_str_isnum
*/

int my_str_isnum(char *str)
{
    int count = 0;
    while (str[count] != '\0') {
        if (str[count] < '0' || str[count] > '9') {
            return 0;
        }
        count++;
    }
    return 1;
}