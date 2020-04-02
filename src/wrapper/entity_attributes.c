/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** entity_attributes
*/

#include "my_defender.h"

entity_attributes_t *init_entity_attributes(void)
{
    entity_attributes_t *attributes = malloc(sizeof(entity_attributes_t));

    if (attributes != NULL) {
        attributes->damage_area = 0;
        attributes->fire_clock = sfClock_create();
        attributes->fire_damage = 0;
        attributes->fire_duration = 0;
        attributes->power = 0;
        attributes->range = 0;
        attributes->slow_clock = sfClock_create();
        attributes->slowing_power = 0;
        attributes->speed = 0;
    }
    return (attributes);
}