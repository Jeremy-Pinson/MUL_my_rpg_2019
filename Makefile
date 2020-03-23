##
## EPITECH PROJECT, 2019
## Project
## File description:
## Makefile
##

SRC		=		src/main.c\
				src/menu/main_menu.c

OBJ		=		$(SRC:%.c=%.o)

NAME	=		makemodel

CFLAGS	=		-Wall -Wshadow -I./include 

LDFLAGS	=		-L./lib/my -lmy  -lcsfml-graphics -lcsfml-window -lcsfml-system

CC 		=		gcc

all:	$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C ./lib/my
		$(CC) $(SRC) $(CFLAGS) $(LDFLAGS) -o $(NAME)

debug: CFLAGS += -g
debug: fclean all

clean:
		$(RM) /src/*.o
		$(RM) $(OBJ)
		make -C ./lib/my clean

fclean: clean
		$(RM) $(NAME)
		make -C ./lib/my fclean

re:		fclean all

.PHONY: all clean fclean re
