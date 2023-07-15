##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

NAME	=	bsq

CFLAGS	=	-Wall -Wextra

SRC	=	bsq.c		\
		lib/my/my_put_nbr.c		\
		lib/my/my_putchar.c		\
		lib/my/my_putstr.c		\
		lib/my/my_strlen.c		\
		lib/my/my_str_to_word_array.c	\
		copy_str.c				\
		count/count_lines.c			\
		count/count_char_one_line.c	\
		convert/convert_char_to_int.c	\
		convert/convert_int_to_char.c	\
		print_int_map.c		\
		find_bsq.c		\
		replace_by_x.c		\
		print_map_bsq.c		\

OBJ	=	$(SRC:.c=.o)

all:	$(OBJ)
	gcc $(OBJ) -o $(NAME) -g

clean:
	rm -f $(OBJ) *.o

fclean:	clean
	rm -f $(NAME) *.o

re:	clean fclean all

.PHONY:	all clean fclean re
