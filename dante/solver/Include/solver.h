/*
** EPITECH PROJECT, 2023
** solver
** File description:
** solver
*/

#ifndef SOLVER_H_
    #define SOLVER_H_

    #define MAX 10000
    #define EMPTY '.'
    #define WALL 'X'
    #define PATH 'o'
    #define ROWS maze->rows
    #define COLS maze->cols

    typedef struct position {
        int x;
        int y;
    } position_t;

    typedef struct queue {
        position_t positions[MAX * MAX];
        int front;
        int rear;
    } queue_t;

    typedef struct maze {
        int rows;
        int cols;
        position_t startposition;
        position_t endposition;
        char layout[MAX][MAX];
        position_t parent[MAX][MAX];
        int visited[MAX][MAX];
        queue_t queue;
    } maze_t;

#endif /* !SOLVER_H_ */
