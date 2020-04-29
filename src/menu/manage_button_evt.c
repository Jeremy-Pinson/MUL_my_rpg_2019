/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** manage_button_evt
*/

#include "interface.h"
#include "engine.h"

bool on_click(button_t *btn, launcher_t *launcher)
{
    if (btn->data) {
        sfVector2i *btn_rez = btn->data;
        *launcher->game_rez = (sfVector2i){btn_rez->x, btn_rez->y};
    } else
        launcher->game_rez = NULL;
    return (true);
}

bool button_overfly(button_t *btn, sfVector2i mouse_pos, sfEvent *event, \
launcher_t *launcher)
{
    if (insidebox_detect(sfRectangleShape_getPosition(btn->rectangle_shape), \
    sfRectangleShape_getSize(btn->rectangle_shape), \
    convert_2i_to_2f(mouse_pos), (sfVector2f){1, 1})) {
        sfIntRect rect = sfRectangleShape_getTextureRect\
        (btn->rectangle_shape);
        if (event->type == sfEvtMouseButtonPressed)
            rect.top = 400;
        else if (event->type == sfEvtMouseButtonReleased)
            return (on_click(btn, launcher));
        else
            rect.top = 200;
        sfRectangleShape_setTextureRect(btn->rectangle_shape, rect);
    }
    return (false);
}

void reset_texture_rect(sfRectangleShape *btn_shape)
{
    sfIntRect rect = sfRectangleShape_getTextureRect(btn_shape);
    rect.top = 0;
    sfRectangleShape_setTextureRect(btn_shape, rect);
}

bool manage_button_evt(launcher_t *launcher, sfEvent *event)
{
    button_t *tmp_list = launcher->btn_list;
    sfVector2i mouse_pos = sfMouse_getPosition((sfWindow *)launcher->window);
    while (sfRenderWindow_pollEvent(launcher->window, event)){
        while (tmp_list) {
            reset_texture_rect(tmp_list->rectangle_shape);
            if (button_overfly(tmp_list, mouse_pos, event, launcher))
                return (true);
            else if (event->type == sfEvtClosed) {
                launcher->game_rez = NULL;
                return (true);
            }
            tmp_list = tmp_list->next;
        }
    }
    return (false);
}