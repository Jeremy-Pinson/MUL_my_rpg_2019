/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** scene
*/

#include "my_defender.h"

scene_t *init_scene(void)
{
    scene_t *scene = malloc(sizeof(scene_t));

    if (scene != NULL) {
        scene->game_object_list = new_list();
    }
    return (scene);
}

void load_scene_elements(game_t *game)
{
    game_object_list_t *game_object_list = game->scene->game_object_list;
    game_object_t *game_object = NULL;
    int i = 0;

    if (game_object_list == NULL)
        return;
    while (game_object_list != NULL) {
        game_object = game_object_list->game_object;
        if (game_object != NULL) {
            sfRenderWindow_drawSprite(game->window, game_object->sprite, NULL);
        }
        game_object_list = game_object_list->next;
        i++;
    }
}
