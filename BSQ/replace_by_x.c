/*
** EPITECH PROJECT, 2022
** replace by x
** File description:
** replace by x
*/

#include "include/my.h"

int if_cond_two(int i, int n, int max_val, char **nw_map)
{
    int nb_x_rows = 1;
    if (nw_map[i][n] == 'x') {
        while (nb_x_rows < max_val) {
            nw_map[i - nb_x_rows][n] = 'x';
            nb_x_rows++;
        }
        nb_x_rows = 1;
    }
    return 0;
}

void replace_x_rows(char **nw_map, int max_val, char const *str)
{
    for (int i = 0; i < count_line(str); i++) {
        for (int n = 0; n < count_char_one_line(str); n++) {
            if_cond_two(i,n,max_val,nw_map);
        }
    }
    print_map_bsq(nw_map,str);
}

int cond_one(int i, int n, int max_val, char **nw_map)
{
    int nb_x_cols = 1;
    if (nw_map[i][n] == 'x') {
        while (nb_x_cols < max_val) {
            nw_map[i][n - nb_x_cols] = 'x';
            nb_x_cols++;
        }
        nb_x_cols = 1;
    }
    return 0;
}

void replace_x_cols(char **nw_map, int max_val, char const *str)
{
    for (int i = 0; i < count_line(str); i++) {
        for (int n = 0; n < count_char_one_line(str); n++) {
            cond_one(i,n,max_val,nw_map);
        }
    }
    replace_x_rows(nw_map,max_val,str);
}
