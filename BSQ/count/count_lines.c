/*
** EPITECH PROJECT, 2022
** count line
** File description:
** count line
*/

#include "../include/my.h"

int count_line(char const *str)
{
    int lines = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            lines++;
        }
    }
    if (lines >= 2000) {
        my_putstr("Error map too long for this code\n");
        exit (84);
    }
    return lines;
}
