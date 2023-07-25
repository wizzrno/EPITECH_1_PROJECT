/*
** EPITECH PROJECT, 2023
** count_nb_tab
** File description:
** count_nb_tab
*/

#include "../../include/my.h"

int count_nb_tab(char **str)
{
    int nb_tab = 0;
    for (int i = 0; str[i]; i++) {
        nb_tab++;
    }
    return nb_tab;
}
