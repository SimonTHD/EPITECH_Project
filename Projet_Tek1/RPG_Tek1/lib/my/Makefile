##x
## EPITECH PROJECT, 2019
## Makefile
## File description:
## libmy Makefile
##

SRC =	my_getnbr_base.c					\
		my_getnbr.c							\
		my_pow.c							\
		my_put_nbr.c						\
		my_putchar.c						\
		my_putnbr_base.c					\
		my_putstr.c							\
		my_revstr.c							\
		my_showstr.c						\
		my_str_isalpha.c					\
		my_str_islower.c					\
		my_str_isnum.c						\
		my_str_isprintable.c				\
		my_str_isupper.c					\
		my_strcat.c							\
		my_strcmp.c							\
		my_strcpy.c							\
		my_strdup.c							\
		my_strlen.c							\
		my_strlowcase.c						\
		my_strncmp.c						\
		my_strncpy.c						\
		my_strupcase.c						\
		printf/get_int_digits.c 			\
		printf/my_printf.c					\
		printf/my_put_long.c				\
		printf/my_put_unbr.c				\
		printf/my_putnstr.c					\
		printf/utils.c						\
		printf/display_types/b_type.c		\
		printf/display_types/c_type.c		\
		printf/display_types/i_type.c		\
		printf/display_types/ld_type.c		\
		printf/display_types/o_type.c		\
		printf/display_types/p_type.c		\
		printf/display_types/percent_type.c	\
		printf/display_types/s_type.c		\
		printf/display_types/sp_type.c		\
		printf/display_types/u_type.c		\
		printf/display_types/x_type.c		\
		printf/display_types/xu_type.c		\

OBJ = $(SRC:.c=.o)

NAME = libmy.a

LIB = -I include -I printf/include

CFLAGS = -O2 -W -Wall -Wextra -Wshadow $(LIB)

CC = gcc

all:	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp include/my.h ../../include/my.h

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re