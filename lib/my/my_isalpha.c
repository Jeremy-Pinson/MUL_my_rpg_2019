/*
** EPITECH PROJECT, 2019
** Untitled (Workspace)
** File description:
** my_isalpha
*/

#include <stdbool.h>

bool my_islower(char c);

bool my_isupper(char c);

bool my_isalpha(char c)
{
    return (my_isupper(c) || my_islower(c));
}