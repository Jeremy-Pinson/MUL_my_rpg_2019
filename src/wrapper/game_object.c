/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** entity
*/

#include "my_defender.h"

game_object_t *init_game_object(int type, char *texture_file)
{
    game_object_t *game_object = malloc(sizeof(game_object_t));
    sfVector2f pos_default = { 0, 0 };

    if (game_object != NULL) {
        game_object->type = type;
        game_object->pos_default = pos_default;
        game_object->sprite = sfSprite_create();
        game_object->rect = sfRectangleShape_create();
        game_object->clock = sfClock_create();
        if (texture_file != NULL)
            game_object->texture = sfTexture_createFromFile(texture_file, NULL);
        game_object->entity_attributes = NULL;
        if (type == ENTITY)
            game_object->entity_attributes = init_entity_attributes();
    }
    sfSprite_setTexture(game_object->sprite, game_object->texture, sfFalse);
    sfSprite_setPosition(game_object->sprite, pos_default);
    return (game_object);
}
