/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_msg_to_player
*/

#include "game.h"
#include "my.h"

int event_notification(game_obj_t *game, char *str)
{
    game->notif->have_notif = true;
    game->notif->sound = sfSound_create();
    game->notif->text = sfText_create();
    sfText_setString(game->notif->text, str);
    sfText_setCharacterSize(game->notif->text, 30);
    sfText_setColor(game->notif->text, sfYellow);
    sfSound_setBuffer(game->notif->sound, game->notif->buffer_sound);
    return (0);
}