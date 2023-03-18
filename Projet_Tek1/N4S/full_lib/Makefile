##
## EPITECH PROJECT, 2019
## CPE_BSQ_2019
## File description:
## Makefile
##

SRC			=	lib_fncs/my_putstr.c			\
				lib_fncs/my_put_nbr.c			\
				lib_fncs/my_strdup.c			\
				lib_fncs/my_strcat.c			\
				lib_fncs/my_strlen.c			\
				lib_fncs/my_putchar.c			\
				lib_fncs/my_strcpy.c			\
				lib_fncs/my_strcmp.c			\
				lib_fncs/my_getnbr.c			\
				lib_fncs/my_str_isnum.c			\
				lib_fncs/my_str_to_word_array.c	\
				lib_fncs/my_itoa.c				\

OBJ			=	$(SRC:%.c=%.o)

TSRC		=	tests/test_my_lib.c

NAME		=	libmy.a

TESTNAME	=	unit_tests

CFLAGS		=	-W -Wall -Wextra -Wshadow -I include/

FLAGS		=	-lcriterion --coverage

CC			=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)
			$(RM) tests/*.gcno
			$(RM) tests/*.gcda
			$(RM) *.gcno
			$(RM) *.gcda

fclean:		clean
				$(RM) $(NAME) && $(RM) ../$(NAME)
				$(RM) $(TESTNAME)

tests_run:
			$(CC) -o $(TESTNAME) $(TSRC) $(SRC) $(CFLAGS) $(FLAGS) $(NAME)
			./$(TESTNAME)

re:			fclean all

.PHONY:		all clean fclean re