/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** load_entity_start_map
*/

#include "game.h"


entity_t *load_lopez(sfVector2f pos)
{
    char *sprite_sheet_path = "assets/game/sprite_sheet/joe.png";
    entity_t *lopez = malloc(sizeof(entity_t));
    anim_obj_t *anim_lopez = malloc(sizeof(anim_obj_t));
    lopez->direction = 0;
    lopez->pos = pos;
    anim_lopez->frame = 0;
    anim_lopez->nb_of_frame = 1;
    anim_lopez->sprite_sheet = sfTexture_createFromFile\
    (sprite_sheet_path, NULL);
    anim_lopez->width_height_frame = (sfVector2i){25, 25};
    anim_lopez->sprite_one_frame = sfSprite_create();
    sfSprite_setTexture\
    (anim_lopez->sprite_one_frame, anim_lopez->sprite_sheet, sfFalse);
    sfSprite_setTextureRect(anim_lopez->sprite_one_frame, \
    (sfIntRect){0, 0, anim_lopez->width_height_frame.x, \
    anim_lopez->width_height_frame.x});
    sfSprite_setPosition(anim_lopez->sprite_one_frame, (sfVector2f){370, 70});
    lopez->anim = anim_lopez;
    return (lopez);
}

void load_entity_start_map(map_obj_t *map)
{
    map->entity = malloc(sizeof(entity_t) * 2);
    map->entity[0] = load_lopez((sfVector2f){4 * 90, 16 * 4});
    map->entity[1] = NULL;
}