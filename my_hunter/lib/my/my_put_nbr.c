/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** put number
*/

#include "../../include/my.h"

char *my_put_nbr(int nb)
{
    char *life = malloc(sizeof(char) * 2);
    if (nb > 9)
        my_put_nbr(nb / 10);
    if (nb < 0) {
        nb = nb * -1;
        write (1, "-", 1);
        my_put_nbr(nb / 10);
    }
    life[0] = (nb % 10 + '0');
    life[1] = '\0';
    return life;
}
