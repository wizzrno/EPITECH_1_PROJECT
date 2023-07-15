/*
** EPITECH PROJECT, 2023
** imperfect_map
** File description:
** imperfect_map
*/

#include "Include/proto.h"

void fill_imperfect_map(global_t *all, int i , int j)
{
    maze_t *maze = &all->maze;
    if (i % 2 == 0) {
        maze->maze[i][j] = '*';
    } else {
        maze->maze[i][j] = 'X';
    }
}

int create_map(global_t *all)
{
    info_t *info = &all->info;
    maze_t *maze = &all->maze;
    for (int i = 0; i < info->height; i++) {
        for (int j = 0; j < info->width; j++) {
            fill_imperfect_map(all,i,j);
        }
        maze->maze[i][info->width] = '\0';
    }
    maze->maze[0][0] = '*';
    maze->maze[info->height - 1][info->width - 1] = '*';
    return 0;
}

int imperfect_map(global_t *all, char **av)
{
    info_t *info = &all->info;
    maze_t *maze = &all->maze;
    info->height = atoi(av[2]);
    info->width = atoi(av[1]);
    maze->maze = malloc(sizeof(char *) * info->height + 1);
    for (int i = 0; i < info->height; i++) {
        maze->maze[i] = malloc(sizeof(char) * info->width + 1);
    }
    create_map(all);
    return 0;
}
