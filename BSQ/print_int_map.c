/*
** EPITECH PROJECT, 2022
** print int map
** File description:
** print int map
*/

#include "include/my.h"

int **print_int_map(int **map, char const *str)
{
    for (int i = 0; i < count_line(str); i++) {
        for (int n = 0; n < count_char_one_line(str); n++) {
            printf("%d",map[i][n]);
        }
        printf("\n");
    }
    return map;
}
