/*
** EPITECH PROJECT, 2023
** str to word array
** File description:
** str to word array
*/

#include "include/str_arr.h"

int is_sep(str_arr_t *arr, char c)
{
    for (int i = 0; arr->sep[i]; i++) {
        if (c == arr->sep[i]) {
            return 1;
        }
    }
    return 0;
}

int *fill_array(str_arr_t arr)
{
    while (is_sep(&arr,arr.str[arr.idx[0]]) != 1 &&
    arr.str[arr.idx[0]] != '\0') {
        arr.arr[arr.idx[1]][arr.idx[2]] = arr.str[arr.idx[0]];
        arr.idx[2]++;
        arr.idx[0]++;
    }
    return arr.idx;
}

char **str_to_array(char *str, char *sep)
{
    str_arr_t arr;
    initialize_array(&arr,str,sep);
    while (arr.idx[0] <= arr.size - 1) {
        if (is_sep(&arr,arr.str[arr.idx[0]]) == 0) {
            arr.idx = fill_array(arr);
            arr.idx[1]++;
            arr.idx[2] = 0;
        }
        arr.idx[0]++;
    }
    arr.arr[arr.idx[1]] = NULL;
    return arr.arr;
}
