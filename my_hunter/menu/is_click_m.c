/*
** EPITECH PROJECT, 2023
** is_click_m
** File description:
** is_click_m
*/

#include "../include/my.h"

void is_click_m(sfVector2i m, global_t *all)
{
    sfFloatRect mb = sfSprite_getGlobalBounds(all->p[2].sprt);
    if (sfFloatRect_contains(&mb, m.x, m.y)) {
        sfVector2f hp = {-1000.0, -1000.0};
        all->b = sfTrue;
        sfSprite_setPosition(all->p[2].sprt, hp);
    }
}
