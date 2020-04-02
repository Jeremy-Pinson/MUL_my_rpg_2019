/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** game_object_list
*/

#include "my_defender.h"

game_object_list_t *new_list(void)
{
    game_object_list_t *obj_list = malloc(sizeof(game_object_list_t));

    if (obj_list != NULL) {
        obj_list->game_object = NULL;
        obj_list->next = NULL;
    }
    return (obj_list);
}

void destroy_game_object(game_object_t *obj)
{
    if (obj != NULL) {
        sfClock_destroy(obj->clock);
        if (obj->entity_attributes != NULL)
            free(obj->entity_attributes);
        sfRectangleShape_destroy(obj->rect);
        sfText_destroy(obj->sf_text);
        free(obj);
    }
}

game_object_list_t *remove_game_object(game_object_list_t *list,
game_object_t *obj)
{
    game_object_list_t *tmp = NULL;

    if (list == NULL)
        return (NULL);
    if (obj == NULL)
        return (list);
    tmp = list;
    while (tmp->next != NULL) {
        if (tmp->game_object == obj) {
            destroy_game_object(tmp->game_object);
            return (list);
        }
        tmp = tmp->next;
    }
    return (list);
}

game_object_list_t *add_game_object(game_object_t *obj,
game_object_list_t *list)
{
    game_object_list_t *tmp = list;
    game_object_list_t *new_node = malloc(sizeof(game_object_list_t));
    int i = 0;

    new_node->game_object = obj;
    new_node->next = NULL;
    if (list->game_object == NULL)
        list->game_object = obj;
    while (tmp->next != NULL) {
        tmp = tmp->next;
        i++;
    }
    tmp->next = new_node;
    return (list);
}
