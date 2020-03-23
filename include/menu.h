/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** menu
*/

#include "rpg.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#ifndef MENU_H_
#define MENU_H_

typedef struct button_s button_t;


struct button_s
{
    int id;
    func action;
    sfVector2f pos;
    sfVector2f size;
    sfRectangleShape* shape;
    sfTexture* texture;
    sfIntRect rect;
    sfSoundBuffer* sound;
    button_t* next;
};

#endif