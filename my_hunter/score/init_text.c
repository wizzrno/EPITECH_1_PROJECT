/*
** EPITECH PROJECT, 2023
** init_text
** File description:
** init_text
*/

#include "../include/my.h"

void init_round(global_t *all)
{
    all->t[2].font = sfFont_createFromFile("asset/Baxoe.ttf");
    all->t[2].text = sfText_create();
    sfText_setString(all->t[2].text,"Round : ");
    sfText_setFont(all->t[2].text, all->t[2].font);
    sfText_setColor(all->t[2].text, sfWhite);
    sfText_setCharacterSize(all->t[2].text,50);
    sfText_setPosition(all->t[2].text,(sfVector2f){1300.0,0.0});

    all->t[3].font = sfFont_createFromFile("asset/Baxoe.ttf");
    all->t[3].text = sfText_create();
    sfText_setFont(all->t[3].text, all->t[3].font);
    sfText_setColor(all->t[3].text, sfWhite);
    sfText_setCharacterSize(all->t[3].text,50);
    sfText_setPosition(all->t[3].text,(sfVector2f){1450.0,0.0});
}

void init_text(global_t *all)
{
    all->t[0].font = sfFont_createFromFile("asset/Baxoe.ttf");
    all->t[0].text = sfText_create();
    sfText_setString(all->t[0].text,"LIFE : ");
    sfText_setFont(all->t[0].text, all->t[0].font);
    sfText_setColor(all->t[0].text, sfWhite);
    sfText_setCharacterSize(all->t[0].text,50);
    sfText_setPosition(all->t[0].text,(sfVector2f){10.0,0.0});

    all->t[1].font = sfFont_createFromFile("asset/Baxoe.ttf");
    all->t[1].text = sfText_create();
    sfText_setFont(all->t[1].text, all->t[1].font);
    sfText_setColor(all->t[1].text, sfWhite);
    sfText_setCharacterSize(all->t[1].text,50);
    sfText_setPosition(all->t[1].text,(sfVector2f){100.0,0.0});
    init_round(all);
}
