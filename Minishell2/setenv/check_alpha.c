/*
** EPITECH PROJECT, 2023
** check_alpha
** File description:
** check_alpha
*/

#include "../include/my.h"

int not_alpha(char c)
{
    if ((c >= 'A' && c <= 'Z')
    || (c >= 'a' && c <= 'z')
    || (c >= '0' && c <= '9')
    || (c == '_')) {
        return 0;
    } else {
        return 1;
    }
}

int check_alpha(char *name)
{
    for (int i = 0; name[i]; i++) {
        if (!(not_alpha(name[i]) == 0)) {
            return 84;
        }
    }
    return 0;
}
