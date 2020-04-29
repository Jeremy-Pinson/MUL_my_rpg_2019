/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** init_game
*/

#include "game.h"

void init_notif_system(game_obj_t *game)
{
    game->notif = malloc(sizeof(notif_t));
    game->notif->have_notif = false;
    game->notif->buffer_sound = sfSoundBuffer_createFromFile\
    ("assets/game/song/notif.ogg");
}

game_obj_t *init_game_obj(void)
{
    game_obj_t *game = malloc(sizeof(game_obj_t));
    init_notif_system(game);
    game->clock = sfClock_create();
    game->event = malloc(sizeof(sfEvent));
    game->actual_map = load_start_map();
    game->player = init_player(game->actual_map->buffer_map);
    game->is_play = true;
    return (game);
}