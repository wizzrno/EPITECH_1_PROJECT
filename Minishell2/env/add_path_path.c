/*
** EPITECH PROJECT, 2023
** add_path_path
** File description:
** add_path_path
*/

#include "../include/my.h"

char *add_path_path(char *path)
{
    size_t len = 1000;
    char *current = malloc(sizeof(char) * len);
    current = getcwd(current, len);
    current = concat_array("HOME=", current);
    int nb_slash = 0;
    for (int i = 0; nb_slash != 3; i++) {
        if (current[i] == '/') {
            nb_slash++;
        }
        path[i] = current[i];
    }
    return path;
}
