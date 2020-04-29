/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** game_init
*/

#include "game.h"
#include <stdlib.h>
#include <time.h>

int game(sfVector2i win_rez)
{
    srand(time(NULL));
    sfRenderWindow *game_win = game_window_create(win_rez);
    game_obj_t *game_obj = init_game_obj();
    game_obj->window = game_win;
    game_loop(game_obj, game_win);
    sfRenderWindow_close(game_win);
    return (0);
}