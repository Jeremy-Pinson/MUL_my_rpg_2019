/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** interface
*/

#ifndef INTERFACE_H_
#define INTERFACE_H_

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Window/Cursor.h>
#include <stdbool.h>
#include <stdlib.h>


typedef struct button_s button_t;
typedef struct launcher_s launcher_t;
typedef int (*func)();

void create_launcher_window(launcher_t *launcher);
sfVector2i *launcher_loop(void);
launcher_t *create_init_launcher_obj(void);
button_t *close_btn_create(void);
void draw_btn(sfRenderWindow *launcher_window, button_t *btn_list);
button_t *load_btn_list(void);
bool manage_button_evt(launcher_t *launcher, sfEvent *event);
button_t *hd_btn_create(void);
button_t *fhd_btn_create(void);
button_t *sd_btn_create(void);

struct button_s
{
    int id;
    sfRectangleShape* rectangle_shape;
    sfVector2f pos;
    sfVector2f size;
    func action;
    sfTexture* texture;
    sfSoundBuffer* song_onclick;
    button_t* next;
    void *data;
};

struct launcher_s
{
    sfRenderWindow* window;
    sfTexture* background_texture;
    sfSprite* background_sprite;
    button_t* btn_list;
    sfMusic* music;
    sfVector2i *game_rez;
};

#endif