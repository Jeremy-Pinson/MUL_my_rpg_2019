/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** selector
*/

#include "fight.h"

void change_selector_pos(fight_t *fight)
{
    sfVector2f pos;

    if (fight->sel_dir == POS1 || fight->sel_dir == POS2)
        pos.x = sfRenderWindow_getSize(fight->win).x / 6;
    else
        pos.x = sfRenderWindow_getSize(fight->win).x / 2.15;
    if (fight->sel_dir == POS1 || fight->sel_dir == POS3)
        pos.y = sfRenderWindow_getSize(fight->win).y / 1.2;
    else
        pos.y = sfRenderWindow_getSize(fight->win).y / 1.1;
    sfText_setPosition(fight->selector, pos);
}

void set_selector_pos(fight_t *fight, sfKeyCode key)
{
    if (key == sfKeyRight && fight->sel_dir == POS1)
        fight->sel_dir = POS3;
    else if (key == sfKeyDown && fight->sel_dir == POS1)
        fight->sel_dir = POS2;
    else if (key == sfKeyRight && fight->sel_dir == POS2)
        fight->sel_dir = POS4;
    else if (key == sfKeyUp && fight->sel_dir == POS2)
        fight->sel_dir = POS1;
    else if (key == sfKeyLeft && fight->sel_dir == POS3)
        fight->sel_dir = POS1;
    else if (key == sfKeyDown && fight->sel_dir == POS3)
        fight->sel_dir = POS4;
    else if (key == sfKeyLeft && fight->sel_dir == POS4)
        fight->sel_dir = POS2;
    else if (key == sfKeyUp && fight->sel_dir == POS4)
        fight->sel_dir = POS3;
    change_selector_pos(fight);
}