/*
** EPITECH PROJECT, 2023
** display_window
** File description:
** display_window
*/

#include "../include/my.h"

sfClock *after_play(global_t *all, sfClock *clock, float s)
{
    if (all->b == sfTrue) {
        check_round(all);
        check_pos(all);
        clock = animation(all,clock,s);
        sfRenderWindow_drawSprite(all->w.win, all->p[1].sprt, sfFalse);
        sfRenderWindow_drawText(all->w.win,all->t[0].text,NULL);
        sfRenderWindow_drawText(all->w.win,all->t[1].text,NULL);
        sfRenderWindow_drawText(all->w.win,all->t[2].text,NULL);
        sfRenderWindow_drawText(all->w.win,all->t[3].text,NULL);
    } else {
        sfRenderWindow_drawSprite(all->w.win, all->p[2].sprt, sfFalse);
    }
    return clock;
}

void check_evt(global_t *all, sfVector2i m)
{
    if (all->w.ev.type == sfEvtClosed) {
        sfRenderWindow_close(all->w.win);
    }
    if (all->w.ev.type == sfEvtMouseButtonPressed
    && all->w.ev.mouseButton.button == sfMouseLeft) {
        is_click_m(m,all);
        is_click_p(m,all);
        is_click_q(m,all);
    }
    if (all->close == sfTrue) {
        sfRenderWindow_close(all->w.win);
    }
}

sfBool win_loose(global_t *all)
{
    if (all->life == 0) {
        all->b = sfFalse;
        sfRenderWindow_drawText(all->w.win, all->t[5].text,NULL);
        sfRenderWindow_drawSprite(all->w.win, all->p[3].sprt, sfFalse);
        all->is_dis = sfTrue;
    } else if (all->round == 4) {
        all->b = sfFalse;
        sfRenderWindow_drawText(all->w.win, all->t[4].text,NULL);
        sfRenderWindow_drawSprite(all->w.win, all->p[3].sprt, sfFalse);
        all->is_dis = sfTrue;
    }
    return all->is_dis;
}

void display_window(global_t *all)
{
    init(all);
    sfClock *clock = sfClock_create();
    sfTime time;
    while (sfRenderWindow_isOpen(all->w.win)) {
        time = sfClock_getElapsedTime(clock);
        float s = time.microseconds / 1000000.0;
        sfRenderWindow_clear(all->w.win, sfBlack);
        sfVector2i m = sfMouse_getPositionRenderWindow(all->w.win);
        all->t->life = my_put_nbr(all->life);
        all->t->round = my_put_nbr(all->round);
        sfText_setString(all->t[1].text, all->t->life);
        sfText_setString(all->t[3].text, all->t->round);
        while (sfRenderWindow_pollEvent(all->w.win, &all->w.ev)) {
            check_evt(all,m);
        }
        sfRenderWindow_drawSprite(all->w.win, all->p[0].sprt, sfFalse);
        all->is_dis = win_loose(all);
        clock = after_play(all,clock,s);
        sfRenderWindow_display(all->w.win);
    }
}
