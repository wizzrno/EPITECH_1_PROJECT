/*
** EPITECH PROJECT, 2023
** check_round
** File description:
** check_round
*/

#include "../include/my.h"

void check_round(global_t *all)
{
    if (all->round == 1) {
        all->p[1].speed.x = 0.5;
    } else if (all->round == 2) {
        all->p[1].speed.x = 1.0;
    } else {
        all->p[1].speed.x = 2.0;
    }
}
