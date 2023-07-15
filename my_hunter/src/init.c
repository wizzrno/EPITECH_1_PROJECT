/*
** EPITECH PROJECT, 2023
** init
** File description:
** init
*/

#include "../include/my.h"

void init(global_t *all)
{
    init_window(all);
    init_background(all);
    init_bat(all);
    init_menu(all);
    init_quit(all);
    init_text(all);
    winning_text(all);
    loosing_text(all);
}
