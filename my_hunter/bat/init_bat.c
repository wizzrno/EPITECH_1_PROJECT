/*
** EPITECH PROJECT, 2023
** init_bat
** File description:
** init_bat
*/

#include "../include/my.h"

void init_bat(global_t *all)
{
    all->p[1].txtr = sfTexture_createFromFile("asset/bat2.png",NULL);
    all->p[1].sprt = sfSprite_create();
    all->p[1].rect.top = 0;
    all->p[1].rect.left = 300;
    all->p[1].rect.width = 110;
    all->p[1].rect.height = 110;
    sfSprite_setTextureRect(all->p[1].sprt,all->p[1].rect);
    sfSprite_setScale(all->p[1].sprt,(sfVector2f){1.2,1.2});
    sfSprite_setPosition(all->p[1].sprt,(sfVector2f){-1.0,255.0});
    sfSprite_setTexture(all->p[1].sprt, all->p[1].txtr, sfFalse);
}
