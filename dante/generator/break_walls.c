/*
** EPITECH PROJECT, 2023
** break_walls
** File description:
** break_walls
*/

#include "Include/proto.h"

int break_walls(global_t *all)
{
    info_t *info = &all->info;
    maze_t *maze = &all->maze;
    srand(time(NULL));
    int rand_x = rand() % info->width + 1;
    int rand_path = rand() % info->width + 1;
    int j = 0;
    for (int i = 1; i < info->height; i += 2) {
        while (j < rand_path) {
            maze->maze[i][rand_x] = '*';
            rand_x = rand() % info->width;
            j++;
        }
        j = 0;
    }
    print_map(all);
    return 0;
}
