/*
** EPITECH PROJECT, 2023
** copy_narray
** File description:
** copy_narray
*/

#include "../../include/my.h"

char *copy_narray(char *s1, char *s2, int start, int end)
{
    int i = 0;
    s2 = malloc(sizeof(char) * (end - start) + 1);
    while (start < end) {
        s2[i] = s1[start];
        start++;
        i++;
    }
    s2[i] = '\0';
    return s2;
}
