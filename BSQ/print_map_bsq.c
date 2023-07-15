/*
** EPITECH PROJECT, 2022
** print map bsq
** File description:
** print map bsq
*/

#include "include/my.h"

int print_map_bsq(char **nw_map, char const *str)
{
    for (int i = 0; i < count_line(str); i++) {
        my_putstr(nw_map[i]);
        my_putchar('\n');
    }
    return 0;
}
