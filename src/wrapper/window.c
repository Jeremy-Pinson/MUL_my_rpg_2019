/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** window
*/

#include "my_defender.h"

sfRenderWindow *init_window(void)
{
    sfVideoMode v_mode = DISPLAY_MODE;
    sfRenderWindow *win = \
    sfRenderWindow_create(v_mode, GAME_NAME, sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(win, FRAMERATE);

    return (win);
}

void clear_window(sfRenderWindow *win)
{
    sfRenderWindow_clear(win, sfBlue);
}

void refresh_window(sfRenderWindow *win)
{
    sfRenderWindow_display(win);
}