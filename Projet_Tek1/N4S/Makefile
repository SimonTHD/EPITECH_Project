##
## EPITECH PROJECT, 2020
## AIA_n4s_2019
## File description:
## Makefile
##

NAME =		ai

LIBD =			full_lib/

SRC =			src/main/main.c					\
				src/n4s/n4s.c					\
				src/n4s/check_finish_map.c		\
				src/n4s/split_file.c 			\
				src/n4s/check_speed.c			\
				src/n4s/check_direction.c 		\
				src/n4s/simulation.c			\

OBJ	=			$(SRC:%.c=%.o)

CFLAGS =			-W -Wall -Wextra -Wshadow -I include/

LDFLAGS	=			-L $(LIBD) -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
			$(MAKE) -C $(LIBD)
			$(CC) $(OBJ) $(LDFLAGS) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
			$(MAKE) -C $(LIBD) fclean
			$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re