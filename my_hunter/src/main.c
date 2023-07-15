/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/my.h"

int main(void)
{
    global_t all;
    all.p = malloc(sizeof(hng_t) * 4);
    all.t = malloc(sizeof(hxt_t) * 6);
    all.round = 1;
    all.b = sfFalse;
    all.life = 4;
    all.close = sfFalse;
    all.is_dis = sfFalse;
    display_window(&all);
}
