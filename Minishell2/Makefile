##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

NAME	=	mysh

SRC		=	src/main.c					\
			src/mysh.c					\
			cmd/get_cmd.c				\
			cmd/check_cmd.c				\
			cmd/double_cmd.c			\
			cmd/mixes_cmd.c				\
			cd/cmd_cd.c					\
			cd/get_home_path.c			\
			cd/cd_flags_path.c			\
			cd/get_last_path.c			\
			env/cmd_env.c				\
			env/check_env.c				\
			env/add_path_path.c			\
			setenv/cmd_setenv.c			\
			setenv/check_alpha.c		\
			setenv/get_errors.c			\
			unsetenv/cmd_unsetenv.c		\
			binaries/get_bin_env.c		\
			binaries/check_if_bin.c		\
			binaries/add_bin_before.c	\
			lib/my/compare_array.c		\
			lib/my/compare_narray.c		\
			lib/my/concat_array.c		\
			lib/my/copy_array.c			\
			lib/my/copy_narray.c		\
			lib/my/count_nb_tab.c		\
			lib/my/initialize_array.c	\
			lib/my/my_put_nbr.c			\
			lib/my/my_putchar.c			\
			lib/my/my_putstr.c			\
			lib/my/my_strlen.c			\
			lib/my/str_ncpy.c			\
			lib/my/str_to_array.c		\
			lib/my/count_len_words.c	\
			lib/my/malloc_array.c		\
			lib/my/count_str_words.c

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -g3

all:	$(OBJ)
		gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean	clean	all

.PHONY:	re fclean clean all
