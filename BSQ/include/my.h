/*
** EPITECH PROJECT, 2022
** my
** File description:
** my
*/

#ifndef my
    #define my
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    int bsq(char const *filepath);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_putstr( char const *str);
    int my_strlen( char const *str);
    char *copy_map(char const *str);
    int count_line(char const *str);
    int count_char_one_line(char const *str);
    int **convert_char_to_int(char const *str);
    int **print_int_map(int **map, char const *str);
    int **find_bsq_size(int **map, char const *str);
    char **convert_int_to_char(int **map, char const *str);
    char **my_str_to_word_array(char const *str);
    void replace_x_cols(char **nw_map, int max_val, char const *str);
    int print_map_bsq(char **nw_map, char const *str);
#endif /* !my */
