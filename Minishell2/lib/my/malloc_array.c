/*
** EPITECH PROJECT, 2023
** malloc_array
** File description:
** malloc_array
*/

#include "include/str_arr.h"

void malloc_array(str_arr_t *arr)
{
    arr->arr = malloc(sizeof(char *) * arr->words + 1);
    for (int i = 0; i < arr->words; i++) {
        arr->arr[i] = malloc(sizeof(char) * arr->lenw[i] + 1);
    }
}
