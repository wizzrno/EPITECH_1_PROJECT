/*
** EPITECH PROJECT, 2022
** count_char_one_line
** File description:
** count_char_one_line
*/

#include "../include/my.h"

int count_char_one_line(char const *str)
{
    int char_line = 0;
    for (int i = 0; str[i] != '\n'; i++) {
        char_line++;
    }
    return char_line;
}
