/*
** EPITECH PROJECT, 2023
** create_path
** File description:
** create_path
*/

#include "Include/proto.h"

int create_path(global_t *all)
{
    info_t *info = &all->info;
    maze_t *maze = &all->maze;
    srand(time(NULL));
    for (int i = 1; i < info->height - 1; i += 2) {
        maze->maze[i][rand() % info->width] = '*';
    }
    print_map(all);
    return 0;
}
