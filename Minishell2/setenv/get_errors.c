/*
** EPITECH PROJECT, 2023
** get_errors
** File description:
** get_errors
*/

#include "../include/my.h"

int get_errros(char *name)
{
    if (!((name[0] >= 'A' && name[0] <= 'Z')
    || (name[0] >= 'a' && name[0] <= 'z'))) {
        my_putstr("setenv: Variable name must begin with a letter.\n");
        return 1;
    }
    if (check_alpha(name) == 84) {
        my_putstr("setenv: Variable name must contain alphanumeric characters.\n");
        return 1;
    }
    return 0;
}
