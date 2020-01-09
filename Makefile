##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile the libmy
##

CC = gcc

FLAG = -l c_graph_prog

RM = rm -f

SRC =	source/structure_initialisation.c \
	source/to_window.c \
	source/to_texture.c \
	source/to_sprite.c \
	menu_pause/menu_pause.c \
	menu_pause/to_texture_pause.c \
	menu_pause/to_texture_pause_2.c \
	source/check_position.c \
	source/clock_handle.c \
	source/display_score.c \
	source/to_clock.c \
	source/my_runner.c \
	source/my_putchar.c \
	source/my_putstr.c \

OBJ = $(SRC:.c=.o)

NAME = my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(FLAG)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
