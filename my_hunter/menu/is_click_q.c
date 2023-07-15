/*
** EPITECH PROJECT, 2023
** is_click_q
** File description:
** is_click_q
*/

#include "../include/my.h"

void is_click_q(sfVector2i m, global_t *all)
{
    if (all->is_dis == sfTrue) {
        sfFloatRect qb = sfSprite_getGlobalBounds(all->p[3].sprt);
        if (sfFloatRect_contains(&qb, m.x, m.y)) {
            all->close = sfTrue;
        }
    }
}
