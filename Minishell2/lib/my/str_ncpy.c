/*
** EPITECH PROJECT, 2023
** str_ncpy
** File description:
** str_ncpy
*/

#include "../../include/my.h"

char *str_ncpy(char *src, char *dest, int n)
{
    dest = malloc(sizeof(char) * sizeof(src));
    for (int i = 0; i < n ; i++) {
        dest[i] = src[i];
    }
    return dest;
}
