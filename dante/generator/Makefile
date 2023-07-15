##
## EPITECH PROJECT, 2022
## BSQ Project
## File description:
## makefile
##

SRC 	= 		main.c\
				imperfect_map.c\
				break_walls.c\
				check_argument.c\
				create_path.c\
				verify_args.c\
				print_map.c\

OBJ     =       $(SRC:.c=.o)

NAME 	= 		generator

CFLAGS	=	-Wall -Wextra -g3

all: 	$(NAME)

$(NAME) : 		$(OBJ)
		gcc -o $(NAME) $(OBJ) -g3

clean:
		rm -f $(OBJ) *.o

fclean: clean
		rm -f $(NAME)
		rm -f vgcore.*

re: fclean all
