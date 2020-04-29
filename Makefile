##
## EPITECH PROJECT, 2019
## my_rpg
## File description:
## Makefile
##

SRC =	./src/main.c		\
		src/menu/create_launcher_window.c \
		src/menu/launcher_loop.c \
		src/menu/create_init_launcher_obj.c \
		src/menu/manage_button_evt.c \
		src/menu/draw_btn.c	\
		src/menu/load_btn_list.c \
		src/menu/create_btn/create_close_btn.c \
		src/engine/insidebox_detect.c \
		src/engine/vector_convert.c \
		src/menu/create_btn/create_rez_btn.c \
		src/game/game_window_create.c \
		src/game/init_game/game_init.c \
		src/game/init_game/init_game_obj.c	\
		src/game/init_game/init_player.c	\
		src/game/game_loop.c	\
		src/game/animation.c	\
		src/game/move_handling.c \
		src/game/display.c \
		src/game/map_manage/map_colision_load.c \
		src/game/map_manage/scan_playerpos.c	\
		src/game/map_manage/update_player_pos.c \
		src/game/event/event_test.c	\
		src/game/load_map/start_map/load_entity_start_map.c	\
		src/game/load_map/start_map/load_event_start_map.c	\
		src/game/load_map/start_map/load_start_map.c	\
		src/game/event/event_notification.c \
		src/game/fight/run_combat.c	\
		src/game/fight/enemy.c			\
		src/game/fight/fight.c 		\
		src/game/fight/structs.c 		\
		src/game/fight/events.c		\
		src/game/fight/rand.c			\
		src/game/fight/my_itoa.c		\
		src/game/fight/life.c			\
		src/game/fight/capacities.c	\
		src/game/fight/selector.c		\
		src/game/event/event_addxp.c	\

OBJ =	$(SRC:.c=.o)

NAME =	my_rpg

CC = gcc

LIB = -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window -Llib/my -lmy -lm

CFLAGS = -W -Wall -Wextra -Wshadow -I include

all: $(NAME)

$(NAME): $(OBJ)
		 $(MAKE) -C lib/my
		 $(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	$(MAKE) clean -C lib/my
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C lib/my
	$(RM) $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: fclean all

.PHONY: all clean fclean re