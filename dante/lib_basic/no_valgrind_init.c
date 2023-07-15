/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-axel.londas
** File description:
** no_valgrind_init
*/

#include <stdio.h>
#include <stdlib.h>
#include "Include_swa/swa.h"

void countword(STR_T *info);
void countletter(STR_T *info);
void malloc_func(STR_T *info);
int my_strlen(char const *str);

void init_swa(STR_T *info, char *str)
{
    info->str = str;
    info->len = my_strlen(str);
    info->number_line = 0;
    countword(info);
    countletter(info);
    malloc_func(info);
}
