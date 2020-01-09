
##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile the libmy
##

CC = gcc

FLAG = -l c_graph_prog

RM = rm -f

SRC =	main.c \
	to_texture_pause.c \
	to_texture_pause_2.c \
	menu_pause.c \

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
