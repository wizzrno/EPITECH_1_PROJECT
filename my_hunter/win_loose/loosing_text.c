/*
** EPITECH PROJECT, 2023
** loosing_text
** File description:
** loosing_text
*/

#include "../include/my.h"

void loosing_text(global_t *all)
{
    all->t[5].font = sfFont_createFromFile("asset/Baxoe.ttf");
    all->t[5].text = sfText_create();
    sfText_setString(all->t[5].text,"You LOOSE !");
    sfText_setFont(all->t[5].text, all->t[5].font);
    sfText_setColor(all->t[5].text, sfWhite);
    sfText_setCharacterSize(all->t[5].text,100);
    sfText_setPosition(all->t[5].text,(sfVector2f){550.0,300.0});
}
