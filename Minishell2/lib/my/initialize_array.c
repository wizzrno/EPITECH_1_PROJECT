/*
** EPITECH PROJECT, 2023
** initialize_array
** File description:
** initialize_array
*/

#include "include/str_arr.h"

int len_str(char *str)
{
    int len = 0;
    for (int i = 0; str[i]; i++) {
        len++;
    }
    return len;
}

void initialize_array(str_arr_t *arr, char *str, char *sep)
{
    arr->size = len_str(str);
    arr->str = str;
    arr->sep = sep;
    arr->idx = malloc(sizeof(int) * 3);
    arr->idx[0] = 0;
    arr->idx[1] = 0;
    arr->idx[2] = 0;
    count_words(arr);
    count_len(arr);
    malloc_array(arr);
}
