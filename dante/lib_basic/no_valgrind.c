/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-axel.londas
** File description:
** no_valgrind
*/

#include <stdio.h>
#include <stdlib.h>
#include "Include_swa/swa.h"

int my_strlen(char const *str);
void init_swa(STR_T *info, char *str);

int isalphal(char str)
{
    if (str != '\n') {
        return (1);
    } else {
        return (0);
    }
}

void countword(STR_T *info)
{
    info->number_line = 0;
    for (int i = 0; info->str[i] != '\0'; ++i) {
        if (info->str[i] == '\n') {
            ++info->number_line;

        }
    }
}

void countletter(STR_T *info)
{
    info->tab = malloc(sizeof(int) * (info->number_line + 1));
    int j = 0;
    info->tab[j] = 0;
    for (int i = 0; info->str[i] != '\0' ; ++i) {
        if (info->str[i] == '\n') {
            ++j;
            ++i;
            info->tab[j] = 0;
        }
        if (info->str[i] == '\0') {
            break;
        }
        info->tab[j] += 1;
    }
}

void malloc_func(STR_T *info)
{
    info->BIG_ARRAY = malloc(sizeof(char*) * (info->number_line + 1));
    for (int i = 0; i < info->number_line; ++i) {
        info->BIG_ARRAY[i] = malloc(sizeof(char) * (info->tab[i] + 1));
        for (int j = 0; j <= info->tab[i] ; ++j) {
            info->BIG_ARRAY[i][j] = 0;
        }
    }
}

char **my_str_to_word_array(char *str)
{
    STR_T info;
    init_swa(&info,str);
    int j = 0;
    int k = 0;
    for (int i = 0; i <= info.len - 2; ++i) {
        if (isalphal(info.str[i]) == 0) {
            info.BIG_ARRAY[j][k] = '\0';
            ++j;
            k = 0;
            ++i;
        }
        if (j >= info.number_line) {
                break;
        }
        info.BIG_ARRAY[j][k] = str[i];
        ++k;
    }
    info.BIG_ARRAY[info.number_line] = NULL;
    return info.BIG_ARRAY;
}
