/*
** EPITECH PROJECT, 2023
** solver
** File description:
** solver
*/

#include <stdio.h>
#include "solver.h"

int isfileempty(maze_t* maze);
void enfile(maze_t* maze, position_t position);
position_t defile(maze_t* maze);
int isvalid(maze_t* maze, int x, int y);
void printmaze(maze_t* maze, int rows, int cols);

void check_direction(position_t current, position_t moves[] , maze_t* maze)
{
    for (int i = 0; i < 4; i++) {
        int newX = current.x + moves[i].x;
        int newY = current.y + moves[i].y;
        if (isvalid(maze, newX, newY)) {
            position_t newPosition = {newX, newY};
            maze->parent[newX][newY] = current;
            maze->visited[newX][newY] = 1;
            enfile(maze, newPosition);
        }
    }
}

void put_the_path(maze_t* maze, position_t current)
{
    while (current.x != maze->startposition.x ||
current.y != maze->startposition.y) {
        maze->layout[current.x][current.y] = PATH;
        current = maze->parent[current.x][current.y];
    }
}

int solvemaze(maze_t* maze)
{
    position_t moves[] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    enfile(maze, maze->startposition);
    maze->visited[maze->startposition.x][maze->startposition.y] = 1;
    while (!isfileempty(maze)) {
        position_t current = defile(maze);
        if (current.x == maze->endposition.x
&& current.y == maze->endposition.y) {
            break;
        }
        check_direction(current, moves , maze);
    }
    if (!maze->visited[maze->endposition.x][maze->endposition.y]) {
        printf("no solution found\n");
        return 0;
    }
    position_t current = maze->endposition;
    put_the_path(maze, current);
    maze->layout[maze->startposition.x][maze->startposition.y] = PATH;
    printmaze(maze, ROWS, COLS);
    return 0;
}
