/*
** EPITECH PROJECT, 2023
** check_argument
** File description:
** check_argument
*/

#include "Include/proto.h"

int check_argument(global_t *all, char **av)
{
    info_t *info = &all->info;
    maze_t *maze = &all->maze;
    if (strcmp(av[3],"perfect") == 0) {
        info->height = atoi(av[2]);
        info->width = atoi(av[1]);
        maze->maze = malloc(sizeof(char *) * info->height + 1);
        for (int i = 0; i < info->height; i++) {
            maze->maze[i] = malloc(sizeof(char) * info->width);
        }
        create_map(all);
        create_path(all);
    } else if (strcmp(av[3],"imperfect") == 0) {
        imperfect_map(all,av);
        break_walls(all);
    } else {
        write(2,"3rd argument should be either perfect or imperfect",50);
        printf("\n");
        return 84;
    }
    return 0;
}
