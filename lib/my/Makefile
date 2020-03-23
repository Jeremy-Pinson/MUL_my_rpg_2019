##
## EPITECH PROJECT, 2019
## makefile
## File description:
## build file
##

SRC		=	my_compute_power_rec.c	\
			my_compute_square_root.c	\
			my_find_prime_sup.c	\
			my_put_nbr.c	\
			my_getnbr.c	\
			my_strcapitalize.c	\
			my_strcmp.c	\
			my_strlowcase.c	\
			my_strncmp.c	\
			my_strupcase.c	\
			my_isneg.c	\
			my_is_prime.c	\
			my_putchar.c	\
			my_putchar_error.c	\
			my_putstr.c	\
			my_putstr_error.c	\
			my_sort_int_array.c	\
			my_strcpy.c	\
			my_strlen.c	\
			my_strncpy.c	\
			my_swap.c	\
			my_islower.c	\
			my_isupper.c	\
			my_isalpha.c	\
			my_str_to_word_array.c	\
			my_strdup.c

OBJ		=	$(SRC:.c=.o)

NAME		=	libmy.a

CC			=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:		fclean all

.PHONY:		clean fclean re all
