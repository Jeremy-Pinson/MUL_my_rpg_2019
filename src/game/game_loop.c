/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** game_loop
*/

#include "game.h"

bool manage_event(game_obj_t *game, sfRenderWindow *window)
{
    move_player(game);
    while (sfRenderWindow_pollEvent(window, game->event)) {
        if (game->event->type == sfEvtClosed)
            return (true);
    }
    return (false);
}

int game_loop(game_obj_t *game, sfRenderWindow *window)
{
    while (game->is_play) {
        update_player_pos(game);
        is_next_frame(game);
        print_and_display(window, game);
        if (manage_event(game, window))
            game->is_play = false;
    }
    return (0);
}