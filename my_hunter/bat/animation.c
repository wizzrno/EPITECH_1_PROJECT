/*
** EPITECH PROJECT, 2023
** animation
** File description:
** animation
*/

#include "../include/my.h"

sfClock *animation(global_t *all, sfClock *clock, float s)
{
    if (s > 0.13) {
        if (all->p[1].rect.left == 0) {
            all->p[1].rect.left += 300;
        } else {
            all->p[1].rect.left -= 150;
        }
        sfSprite_setTextureRect(all->p[1].sprt,all->p[1].rect);
        sfClock_restart(clock);
    }
    return clock;
}
