/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** game
*/

#ifndef GAME_H_
#define GAME_H_

#include "engine.h"
#include <stdio.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Window/Cursor.h>

#define WALK_RIGHT 2
#define WALK_LEFT 3
#define WALK_UP 1
#define WALK_DOWN 0
#define STAY 0


typedef struct player_s player_t;
typedef struct anim_obj_s anim_obj_t;
typedef struct map_obj_s map_obj_t;
typedef struct game_obj_s game_obj_t;
typedef struct entity_s entity_t;
typedef int (*evt)(game_obj_t *game);
typedef struct notif_s notif_t;

sfRenderWindow *game_window_create(sfVector2i win_rez);
int game(sfVector2i win_rez);
int game_loop(game_obj_t *game, sfRenderWindow *window);
void animation(anim_obj_t *anim, int direction);
void is_next_frame(game_obj_t *game);
void move_player(game_obj_t *game);
map_obj_t *load_start_map(void);
void print_and_display(sfRenderWindow *window, game_obj_t* game);
char **load_collision_map(char *map_link);
sfVector2i scan_playerpos(char **map);
anim_obj_t *init_anim_player(void);
int is_alphabetical(char c);
void update_player_pos(game_obj_t *game);
game_obj_t *init_game_obj(void);
player_t *init_player(char ** map_colision);
void load_entity_start_map(map_obj_t *map);
void load_event_start_map(map_obj_t *map);

//event
int event_test(game_obj_t *game);
int event_notification(game_obj_t *game, char *str);
int event_addxp(game_obj_t *game);

struct player_s
{
    int pv;
    int max_pv;
    int lvl;
    int atq;
    int def;
    int xp;
    int next_lvl_100;
    sfVector2i pos;
    anim_obj_t *anim_obj;
    int direction;
};

struct anim_obj_s
{
    sfTexture* sprite_sheet;
    sfSprite* sprite_one_frame;
    sfVector2i width_height_frame;
    int nb_of_frame;
    int frame;
};

struct entity_s
{
    sfVector2f pos;
    anim_obj_t *anim;
    int direction;
};

struct map_obj_s
{
    sfSprite* sprite_map;
    sfVector2u size;
    char **buffer_map;
    char *location_map;
    int nb_event;
    evt *event;
    entity_t **entity;
};

struct notif_s
{
    bool have_notif;
    sfSoundBuffer *buffer_sound;
    sfSound *sound;
    sfText *text;
};

struct game_obj_s
{
    map_obj_t *actual_map;
    player_t *player;
    sfEvent *event;
    sfClock *clock;
    notif_t *notif;
    sfRenderWindow *window;
    bool is_play;
};

#endif /* !GAME_H_ */
