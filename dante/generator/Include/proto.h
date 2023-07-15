/*
** EPITECH PROJECT, 2022
** my header files
** File description:
** prototypes of sokoban
*/

#include "global.h"

#ifndef MY_PROTO
    #define MY_PROTO
    #include "global.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <time.h>

    int imperfect_map(global_t *all, char **av);
    int break_walls(global_t *all);
    int check_argument(global_t *all, char **av);
    int create_map(global_t *all);
    void fill_imperfect_map(global_t *all, int i , int j);
    int create_path(global_t *all);
    int verify_args(int ac, char **av);
    int print_map(global_t *all);
#endif
