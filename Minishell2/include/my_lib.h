/*
** EPITECH PROJECT, 2023
** my_lib_h
** File description:
** my_lib_h
*/

#ifndef my_lib_h
    #define my_lib_h

    char **str_to_array(char *str, char *sep);
    int compare_array(char *s1, char *s2);
    int compare_narray(char *s1, char *s2, int n);
    char *concat_array(char *s1, char *s2);
    char *copy_array(char *src, char *dst);
    char *copy_narray(char *s1, char *s2, int start, int end);
    int my_put_nbr(int nb);
    void my_putchar(char c);
    int my_putstr( char const *str);
    int my_strlen( char const *str);
    char *str_ncpy(char *src, char *dest, int n);
    int count_nb_tab(char **str);

#endif /* !my_lib_h */
