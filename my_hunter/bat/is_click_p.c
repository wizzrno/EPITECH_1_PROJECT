/*
** EPITECH PROJECT, 2023
** is_click
** File description:
** is_click
*/

#include "../include/my.h"

void is_click_p(sfVector2i m, global_t *all)
{
    sfFloatRect pb = sfSprite_getGlobalBounds(all->p[1].sprt);
    if (sfFloatRect_contains(&pb, m.x, m.y)) {
        all->round += 1;
    } else {
        all->life -= 1;
    }
}
