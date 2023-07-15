##
## EPITECH PROJECT, 2022
## BSQ Project
## File description:
## makefile
##

SRC 	= 		lib_basic/my_putstr.c\
				lib_basic/my_put_nbr.c\
				lib_basic/my_strcmp.c\
				lib_basic/my_putchar.c\
				lib_basic/no_valgrind.c\
				lib_basic/no_valgrind_init.c\
				lib_basic/my_strlen.c\
				lib_basic/my_get_nbr.c\
				lib_basic/my_get_nbr_afterward.c\
				lib_basic/buffer_maker.c\
				generator/break_walls.c\
				generator/check_argument.c\
				generator/create_path.c\
				generator/imperfect_map.c\
				generator/print_map.c\
				generator/verify_args.c\
				generator/main.c\
				solver/lib_solver/db_maker.c\
				solver/lib_solver/info_db.c\
				solver/lib_solver/increment_dbi.c\
				solver/lib_solver/init_struct.c\
				solver/lib_solver/int_copy.c\
				solver/lib_solver/solver.c\
				solver/lib_solver/smallest_coord.c\
				solver/main.c\

OBJ     =    	$(SRC:.c=.o)

all:
		make -C solver/ all
		make -C generator/ all

clean:
		make -C solver/ clean
		make -C generator/ clean

fclean:
	    make -C solver/ fclean
		make -C generator/ fclean
re:
		make -C solver/ re
		make -C generator/ re
