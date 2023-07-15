/*
** EPITECH PROJECT, 2022
** str to word array
** File description:
** str to word array
*/

#include "../../include/my.h"

int isalphanum(char str)
{
    if (('0' <= str && str <= '9')
    || ('A' <= str && str <= 'Z') || ('a' <= str && str <= 'z')
    || str == '.' || str == '#' || str == ' ') {
        return (1);
    } else {
        return (0);
    }
}

int count_word(char const *str)
{
    int word = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n' || str[i] == '\0') {
            i++;
        }
        if (((isalphanum(str[i]) == 1) && (isalphanum(str[i + 1]) == 0))
        || (isalphanum(str[i + 1]) == '\n')) {
            word++;
        }
        i++;
    }
    return word;
}

int *count_len_word(char const *str)
{
    int *lst = malloc(sizeof(int) * count_word(str));
    int i, n, j;
    i = 0, n = 0, j = 0;
    while (str[i] != '\0') {
        while (isalphanum(str[i]) == 0) {
            i++;
        }
        while (isalphanum(str[i]) == 1) {
            j++;
            i++;
        }
        lst[n] = j;
        n++;
        j = 0;
    }
    return lst;
}

char **my_str_to_word_array(char const *str)
{
    char **lst = malloc(sizeof(char *) * count_word(str));
    int i = 0, n = 0, a = 0;
    int *len_letter = count_len_word(str);
    lst[i] = malloc(sizeof(char) * len_letter[i]);
    while (str[a] != '\0') {
        while (isalphanum(str[a]) != 1) {
            a++;
        }
        while (isalphanum(str[a]) == 1) {
            lst[i][n] = str[a];
            a++;
            n++;
        }
        lst[i][n + 1] = '\0';
        i++;
        n = 0;
        lst[i] = malloc(sizeof(char) * len_letter[i]);
    }
    lst[i] = NULL;
    return lst;
}
