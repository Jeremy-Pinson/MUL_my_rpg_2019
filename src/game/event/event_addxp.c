/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** event_addxp
*/

#include "game.h"
#include "my.h"
#include <math.h>

//LVL to XP : xp = 3*pow((LVL+1),2) - 11

//XP to LVL : LVL = sqrt(XP+11 /3) - 1

int event_addxp(game_obj_t *game)
{
    //info follow up
    my_putstr("info follow up:  \n\n");
    my_putstr("avant le combat tu etait level : ");
    my_put_nbr(game->player->lvl);
    my_putstr(" avec ");
    my_put_nbr(game->player->xp);
    my_putstr(" d'xp.\n\n");
    //info follow up

    char *msg = malloc(30);
    game->player->xp += 10;
    int xp = game->player->xp;
    int level = sqrt((xp + 11) / 3) - 1;
    game->player->next_lvl_100 = 100 * xp / (3*pow((level+2),2) - 11);

    //info follow up
    my_putstr("apres le combat tu est level: ");
    my_put_nbr(level);
    my_putstr(" avec ");
    my_put_nbr(game->player->xp);;
    my_putstr(" d'xp.\nil te faut ");
    my_put_nbr((3*pow((level+2),2)) - 11);
    my_putstr(" d'xp pour le niveau suivant, tu est donc à ");
    my_put_nbr(game->player->next_lvl_100);
    my_putstr(" pourcents du prochain niveau.\n");
    //info follow up


    sprintf(msg, "You you passed level %d!!!", level);
    if (level > game->player->lvl) {
        event_notification(game, msg);
        game->player->lvl = level;
    }
    return (0);
}