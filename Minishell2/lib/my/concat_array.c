/*
** EPITECH PROJECT, 2023
** concat_array
** File description:
** concat_array
*/

#include "../../include/my.h"

char *concat_array(char *s1, char *s2)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);
    char *concat = malloc(sizeof(char) * (len_s1 + len_s2) + 1);
    int i = 0;
    int j = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0') {
        concat[i] = s2[j];
        i++;
        j++;
    }
    return concat;
}
