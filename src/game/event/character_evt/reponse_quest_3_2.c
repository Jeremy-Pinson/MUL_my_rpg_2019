/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** reponse_quest_3_2
*/

#include "game.h"
#include "fight.h"

int reponse_quest_3_2(game_obj_t *game)
{
    if (debug_mode)
        my_putstr("declencher reponse 3_2\n");
    int id = 13;
    game->actual_map->event[0] = (evt)&null_event;
    game->player->last_action_id = id;
    return (0);
}