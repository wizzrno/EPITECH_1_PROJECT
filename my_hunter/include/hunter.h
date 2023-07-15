/*
** EPITECH PROJECT, 2023
** hunter_h
** File description:
** hunter_h
*/

#ifndef hunter_h
    #define hunter_h
    #include <SFML/Graphics.h>

    typedef struct win {
        sfVideoMode vm;
        sfRenderWindow *win;
        sfEvent ev;
    } win_t;

    typedef struct hng {
        sfTexture *txtr;
        sfSprite *sprt;
        sfIntRect rect;
        sfVector2f speed;
    } hng_t;

    typedef struct hxt {
        sfFont *font;
        sfText *text;
        char *life;
        char *round;
    } hxt_t;

    typedef struct global {
        win_t w;
        hng_t *p;
        hxt_t *t;
        int round;
        int life;
        sfBool b;
        sfBool close;
        sfBool is_dis;
    } global_t;

#endif /* !hunter_h */
