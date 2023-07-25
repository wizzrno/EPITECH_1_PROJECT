/*
** EPITECH PROJECT, 2023
** compare_array
** File description:
** compare_array
*/

#include "../../include/my.h"

int compare_array(char *s1, char *s2)
{
    for (int i = 0; s1[i] != '\0'; i++) {
        if (!(s1[i] == s2[i])) {
            return 1;
        }
    }
    return 0;
}
