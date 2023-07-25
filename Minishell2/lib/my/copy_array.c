/*
** EPITECH PROJECT, 2023
** copy_array
** File description:
** copy_array
*/

#include "../../include/my.h"

char *copy_array(char *src, char *dst)
{
    dst = malloc(sizeof(char) * my_strlen(src) + 1);
    for (int i = 0; src[i]; i++) {
        dst[i] = src[i];
    }
    return dst;
}
