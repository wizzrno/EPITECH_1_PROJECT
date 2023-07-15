/*
** EPITECH PROJECT, 2022
** global struct
** File description:
** heeeheee
*/

#ifndef STRUCT
    #define STRUCT

    typedef struct info {
        int width;
        int height;
    } info_t;

    typedef struct maze {
        char **maze;
    } maze_t;

    typedef struct global_s {
        info_t info;
        maze_t maze;
    } global_t;

#endif
