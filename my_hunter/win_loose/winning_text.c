/*
** EPITECH PROJECT, 2023
** winning_text
** File description:
** winning_text
*/

#include "../include/my.h"

void winning_text(global_t *all)
{
    all->t[4].font = sfFont_createFromFile("asset/Baxoe.ttf");
    all->t[4].text = sfText_create();
    sfText_setString(all->t[4].text,"You WIN !");
    sfText_setFont(all->t[4].text, all->t[4].font);
    sfText_setColor(all->t[4].text, sfWhite);
    sfText_setCharacterSize(all->t[4].text,100);
    sfText_setPosition(all->t[4].text,(sfVector2f){600.0,300.0});
}
