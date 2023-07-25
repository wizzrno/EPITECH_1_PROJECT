/*
** EPITECH PROJECT, 2023
** str_arr_h
** File description:
** str_arr_h
*/

#ifndef str_arr_h
    #define str_arr_h
    #include <stdlib.h>

    typedef struct str_arr {
        char *str;
        char *sep;
        char **arr;
        int words;
        int *lenw;
        int size;
        int *idx;
    } str_arr_t;

    int len_str(char *str);
    void initialize_array(str_arr_t *arr, char *str, char *sep);
    int *count_len(str_arr_t *arr);
    int count_words(str_arr_t *arr);
    int is_sep(str_arr_t *arr, char c);
    void malloc_array(str_arr_t *arr);
    char **str_to_array(char *str, char *sep);

#endif /* !str_arr_h */
