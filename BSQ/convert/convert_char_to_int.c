/*
** EPITECH PROJECT, 2022
** convert_char_to_int
** File description:
** convert_char_to_int
*/

#include "../include/my.h"

int **add_char(char const *str, int **map)
{
    int a = 0;
    int n = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            map[a][n] = 1;
            n++;
        }
        if (str[i] == 'o') {
            map[a][n] = 0;
            n++;
        }
        if (str[i] == '\n') {
            a++;
            n = 0;
        }
    }
    find_bsq_size(map,str);
    return map;
}

int **convert_char_to_int(char const *str)
{
    int **map = malloc(sizeof(int *) * count_line(str) + 1);
    for (int i = 0; i != count_line(str); i++) {
        map[i] = malloc(sizeof(int) * count_char_one_line(str));
    }
    return add_char(str,map);
}
