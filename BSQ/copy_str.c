/*
** EPITECH PROJECT, 2022
** copy str
** File description:
** copy str
*/

#include "include/my.h"

char *copy_map(char const *str)
{
    char *map = malloc(sizeof(char) * my_strlen(str) + 1);
    int i = 0;
    while (str[i] != '\n') {
        i++;
    }
    i++;
    int j = 0;
    while (str[i] != '\0') {
        map[j] = str[i];
        j++;
        i++;
    }
    map[j - 1] = '\0';
    count_line(map);
    count_char_one_line(map);
    return map;
}
