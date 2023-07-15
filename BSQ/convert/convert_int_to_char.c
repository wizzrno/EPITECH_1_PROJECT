/*
** EPITECH PROJECT, 2022
** convert int to char
** File description:
** convert int to char
*/

#include "../include/my.h"

int find_max_val(int **map, char const *str, int *coord)
{
    int max_val = 0;
    for (int i = 0; i < count_line(str); i++) {
        for (int n = 0; n < count_char_one_line(str); n++) {
            if (map[i][n] > max_val) {
                max_val = map[i][n];
                coord[0] = i;
                coord[1] = n;
            }
        }
    }
    return max_val;
}

char **fill_map(char **nw_map, int **map, char const *str)
{
    int a = 0, z = 0;
    for (int i = 0; i < count_line(str); i++) {
        for (int n = 0; n < count_char_one_line(str); n++) {
            if (map[i][n] >= 1) {
                nw_map[a][z] = '.';
            }
            if (map[i][n] == 0) {
                nw_map[a][z] = 'o';
            }
            z++;
        }
        a++;
        z = 0;
    }
    return nw_map;
}

char **convert_int_to_char(int **map, char const *str)
{
    int coord[2];
    int max_val = find_max_val(map,str,coord);
    char **nw_map = malloc(sizeof(int *) * count_line(str) + 1);
    for (int i = 0; i != count_line(str); i++) {
        nw_map[i] = malloc(sizeof(int) * count_char_one_line(str));
    }
    fill_map(nw_map,map,str);
    for (int i = 0; i < count_line(str); i++) {
        for (int n = 0; n < count_char_one_line(str); n++) {
            if (i == coord[0] && n == coord[1]) {
                nw_map[i][n] = 'x';
            }
        }
    }
    replace_x_cols(nw_map,max_val,str);
    return nw_map;
}
