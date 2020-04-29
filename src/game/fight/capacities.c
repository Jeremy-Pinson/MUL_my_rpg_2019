/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** capacities
*/

#include "fight.h"

void use_attack(fight_t *fight)
{
    if (fight->sel_dir == POS1 || fight->sel_dir == POS2) {
        if (fight->enemy_hp - (fight->player->atq *= 1.2) <= 0) {
            fight->enemy_hp = 0;
            fight->game_status = WON;
        } else
            fight->enemy_hp -= fight->player->atq *= 1.2;
    }
    if (fight->sel_dir == POS3) {
        if (fight->player->pv + 0.2 * fight->player->max_pv\
            > fight->player->max_pv)
            fight->player->pv = fight->player->max_pv;
        else
            fight->player->pv += 0.2 * fight->player->max_pv;
    }
}