/*
** EPITECH PROJECT, 2023
** init_quit
** File description:
** init_quit
*/

#include "../include/my.h"

void init_quit(global_t *all)
{
    all->p[3].txtr = sfTexture_createFromFile("asset/q1.png",NULL);
    all->p[3].sprt = sfSprite_create();
    sfSprite_setScale(all->p[3].sprt,(sfVector2f){0.7,0.7});
    sfSprite_setTexture(all->p[3].sprt, all->p[3].txtr, sfFalse);
    sfSprite_setPosition(all->p[3].sprt, (sfVector2f){600.0,400.0});
    sfRenderWindow_drawSprite(all->w.win, all->p[3].sprt, sfFalse);
}
