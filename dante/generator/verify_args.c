/*
** EPITECH PROJECT, 2023
** verify_args
** File description:
** verify_args
*/

#include "Include/proto.h"


int verify_argu(char **av, int i, int j)
{
    if (!(av[i][j] >= '0' && av[i][j] <= '9')) {
        return 84;
    }
    return 0;
}

int verify_args(int ac, char **av)
{
    int value = 0;
    for (int i = 1; i < ac - 1; i++) {
        for (int j = 0; av[i][j]; j++) {
            value = verify_argu(av,i,j);
        }
    }
    return value;
}
