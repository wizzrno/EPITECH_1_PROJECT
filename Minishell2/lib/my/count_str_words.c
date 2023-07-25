/*
** EPITECH PROJECT, 2023
** count_str_words
** File description:
** count_str_words
*/

#include "include/str_arr.h"

int count_words(str_arr_t *arr)
{
    arr->words = 0;
    for (int i = 0; arr->str[i]; i++) {
        if ((is_sep(arr,arr->str[i]) == 0 && is_sep(arr,arr->str[i + 1]) == 1)
        || arr->str[i + 1] == '\0') {
            arr->words++;
        }
    }
    return arr->words;
}
