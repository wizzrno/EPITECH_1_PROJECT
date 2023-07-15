/*
** EPITECH PROJECT, 2023
** solver
** File description:
** maze_statement
*/

#include "solver.h"
#include <stdio.h>
#include <unistd.h>

int isvalid(maze_t* maze, int x, int y)
{
    if (x < 0 || y < 0 || x >= maze->rows || y >= maze->cols) {
        return 0;
    }
    if (maze->visited[x][y] || maze->layout[x][y] == WALL) {
        return 0;
    }
    return 1;
}

void printmaze(maze_t* maze, int rows, int cols)
{
    for (int i = 0; i < rows; i++) {
        write(1,maze->layout[i],cols);
        if (i + 1 < rows) {
            write(1, "\n",1);
        }
    }
}
