/*
** EPITECH PROJECT, 2023
** init_menu
** File description:
** init_menu
*/

#include "../include/my.h"

void init_menu(global_t *all)
{
    all->p[2].txtr = sfTexture_createFromFile("asset/m1.png",NULL);
    all->p[2].sprt = sfSprite_create();
    sfSprite_setScale(all->p[2].sprt,(sfVector2f){0.7,0.7});
    sfSprite_setTexture(all->p[2].sprt, all->p[2].txtr, sfFalse);
    sfSprite_setPosition(all->p[2].sprt, (sfVector2f){500.0,300.0});
}
