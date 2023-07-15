/*
** EPITECH PROJECT, 2023
** print_map
** File description:
** print_map
*/

#include "Include/proto.h"

int print_map(global_t *all)
{
    info_t *info = &all->info;
    maze_t *maze = &all->maze;
    for (int i = 0; i < info->height - 2; i++) {
        printf("%s\n",maze->maze[i]);
    }
    printf("%s\n",maze->maze[info->height - 2]);
    maze->maze[info->height - 1][info->width] = '\0';
    printf("%s",maze->maze[info->height - 1]);
    return 0;
}
