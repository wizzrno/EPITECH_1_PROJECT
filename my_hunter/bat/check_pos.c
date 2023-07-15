/*
** EPITECH PROJECT, 2023
** hunter
** File description:
** check_pos
*/

#include "../include/my.h"

void check_pos(global_t *all)
{
    sfVector2f ps = sfSprite_getPosition(all->p[1].sprt);
    if (ps.x > 1600) {
        ps.x = -100;
        ps.y = rand() % 650;
    } else {
        ps.x += all->p[1].speed.x;
    }
    sfSprite_setPosition(all->p[1].sprt, ps);
}
