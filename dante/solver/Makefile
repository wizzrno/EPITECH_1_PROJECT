##
## EPITECH PROJECT, 2022
## BSQ Project
## File description:
## makefile
##

SRC 	= 	lib_solver/maze_statement.c\
			lib_solver/solver.c\
			lib_solver/strconcat.c\
			lib_solver/file_function.c\
			lib_solver/error_case.c\
			main.c

OBJ     =       $(SRC:.c=.o)

CPPFLAGS        =       -iquote Include

NAME 	= 		solver

CFLAGS 	=	-Wall	-Wextra	-g3

all: 	$(NAME)

$(NAME) : 		$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ) *~

fclean: clean
		rm -f $(NAME)

re: fclean all
