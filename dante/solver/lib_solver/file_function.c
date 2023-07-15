/*
** EPITECH PROJECT, 2023
** solver
** File description:
** file_function
*/

#include "solver.h"

void initfile(maze_t* maze)
{
    maze->queue.front = 0;
    maze->queue.rear = 0;
}

int isfileempty(maze_t* maze)
{
    return maze->queue.front == maze->queue.rear;
}

void enfile(maze_t* maze, position_t position)
{
    maze->queue.positions[maze->queue.rear++] = position;
}

position_t defile(maze_t* maze)
{
    return maze->queue.positions[maze->queue.front++];
}
