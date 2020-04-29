/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** launcher_loop
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Window/Cursor.h>
#include <stdbool.h>
#include <stdio.h>
#include "interface.h"

sfVector2i *launcher_loop(void)
{
    bool menu_is_open = true;
    sfEvent *event = malloc(sizeof(sfEvent));
    launcher_t *launcher = create_init_launcher_obj();
    while (menu_is_open) {
        sfRenderWindow_clear(launcher->window, sfBlack);
        sfRenderWindow_drawSprite(launcher->window, \
        launcher->background_sprite, NULL);
        if (manage_button_evt(launcher, event))
            menu_is_open = false;
        draw_btn(launcher->window, launcher->btn_list);
        sfRenderWindow_display(launcher->window);
    }
    sfRenderWindow_close(launcher->window);
    return (launcher->game_rez);
}