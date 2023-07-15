/*
** EPITECH PROJECT, 2023
** solver
** File description:
** main
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "solver.h"

void initfile(maze_t* maze);
void solvemaze(maze_t* maze);
char *strconcat(char *src, char *ext);
int error_case(int ac ,char **av);


void make_array(int fd, maze_t* maze)
{
    int y = 0;
    char ch = 0;
    int x = 0;

    while (read(fd, &ch, 1) > 0) {
        if (ch == '\n') {
            maze->rows++;
            y = 0;
            x++;
        } else {
            maze->layout[x][y++] = ch;
            maze->cols = (y > maze->cols) ? y : maze->cols;
        }
    }
    if (y != 0) {
        maze->rows++;
    }
}

int main(int ac, char **av)
{
    if (error_case(ac, av) == 84) {
        return 84;
    }
    maze_t* maze = malloc(sizeof(maze_t));
    maze->rows = 0;
    maze->cols = 0;
    int fd = open(av[1], O_RDONLY);
    make_array(fd, maze);
    maze->startposition.x = maze->startposition.y = 0;
    maze->endposition.x = maze->rows - 1;
    maze->endposition.y = maze->cols - 1;
    close(fd);
    initfile(maze);
    solvemaze(maze);
    free(maze);
    return 0;
}
