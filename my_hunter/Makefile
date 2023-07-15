##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

CC	=	gcc

NAME	=	my_hunter

SRC		=	src/main.c\
			src/init.c\
			window/display_window.c\
			window/init_window.c\
			background/init_background.c\
			bat/init_bat.c\
			bat/check_pos.c\
			bat/animation.c\
			bat/is_click_p.c\
			bat/check_round.c\
			menu/init_menu.c\
			menu/init_quit.c\
			menu/is_click_m.c\
			menu/is_click_q.c\
			score/init_text.c\
			win_loose/winning_text.c\
			win_loose/loosing_text.c\
			lib/my/my_put_nbr.c\

OBJ		=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -g3

CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	$(OBJ)
		$(CC) -o $(NAME) $(SRC) $(CFLAGS) $(CSFML)

clean:
		rm -f $(OBJ)
		rm -f vgcore.*

fclean:	clean
		rm -f $(NAME)

re:	fclean	clean  all

.PHONY:	re
