/*
** EPITECH PROJECT, 2023
** my_h
** File description:
** my_h
*/

#ifndef my_h
    #define my_h
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/Sprite.h>
    #include <SFML/Graphics/Rect.h>
    #include "hunter.h"
    #include <stdio.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

    void init_window(global_t *all);
    void display_window(global_t *all);
    void init_background(global_t *all);
    void init_bat(global_t *all);
    sfClock *animation(global_t *all, sfClock *clock, float s);
    void check_pos(global_t *all);
    void is_click_p(sfVector2i m, global_t *all);
    void check_round(global_t *all);
    void init_menu(global_t *all);
    void is_click_m(sfVector2i m, global_t *all);
    void is_click_q(sfVector2i m, global_t *all);
    void init_text(global_t *all);
    char *my_put_nbr(int nb);
    void winning_text(global_t *all);
    void loosing_text(global_t *all);
    void init_quit(global_t *all);
    void init(global_t *all);

#endif /* !my_h */
