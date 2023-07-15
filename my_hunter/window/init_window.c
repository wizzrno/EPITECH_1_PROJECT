/*
** EPITECH PROJECT, 2023
** init_window
** File description:
** init_window
*/

#include "../include/my.h"

void init_window(global_t *all)
{
    all->w.vm.bitsPerPixel = 32;
    all->w.vm.height = 850;
    all->w.vm.width = 1500;
    all->w.win = sfRenderWindow_create(all->w.vm, "RPG", sfClose, NULL);
}
