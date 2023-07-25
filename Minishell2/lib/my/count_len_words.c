/*
** EPITECH PROJECT, 2023
** count_len_words
** File description:
** count_len_words
*/

#include "include/str_arr.h"

int count_lenw(str_arr_t *arr, int i, int j)
{
    while (is_sep(arr,arr->str[i]) != 1
    && arr->str[i + 1] != '\0') {
        i++;
        arr->lenw[j] += 1;
    }
    return i;
}

int *count_len(str_arr_t *arr)
{
    int j = 0;
    arr->lenw = malloc(sizeof(int) * arr->words);
    for (int i = 0; arr->str[i] != '\0'; i++) {
        if (is_sep(arr,arr->str[i]) == 0) {
            arr->lenw[j] = 0;
            i = count_lenw(arr,i,j);
            j++;
        }
    }
    arr->lenw[j] = 0;
    return arr->lenw;
}
