/*
** EPITECH PROJECT, 2022
** find bsq
** File description:
** find bsq
*/

#include "include/my.h"

int if_cond_bsq(int **map,int i, int n, int min)
{
    if (map[i - 1][n - 1] < map[i][n - 1]) {
        min = map[i - 1][n - 1];
    } else {
        min = map[i][n - 1];
    }
    if (map[i - 1][n] < map[i - 1][n - 1]) {
        min = map[i - 1][n];
    }
    if (map[i][n] != 0) {
        map[i][n] += min;
    }
    return 0;
}

int **find_bsq_size(int **map, char const *str)
{
    int min = 0;
    for (int i = 1; i < count_line(str); i++) {
        for (int n = 1; n < count_char_one_line(str); n++) {
            if_cond_bsq(map,i,n,min);
        }
    }
    convert_int_to_char(map,str);
    return map;
}
