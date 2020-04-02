/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** game
*/

#include "my_defender.h"

game_t *init_game(void)
{
    game_t *game = malloc(sizeof(game_t));

    if (game != NULL) {
        game->scene = NULL;
        game->window = init_window();
    }
    return (game);
}