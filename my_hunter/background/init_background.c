/*
** EPITECH PROJECT, 2023
** init_background
** File description:
** init_background
*/

#include "../include/my.h"

void init_background(global_t *all)
{
    all->p[0].txtr = sfTexture_createFromFile("asset/f3.png",NULL);
    all->p[0].sprt = sfSprite_create();
    sfSprite_setScale(all->p[0].sprt,(sfVector2f){0.95,0.8});
    sfSprite_setPosition(all->p[0].sprt,(sfVector2f){0.0,0.0});
    sfSprite_setTexture(all->p[0].sprt, all->p[0].txtr, sfFalse);
}
