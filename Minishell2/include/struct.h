/*
** EPITECH PROJECT, 2023
** struct_h
** File description:
** struct_h
*/

#ifndef struct_h
    #define struct_h

    typedef struct info {
        int p;
        int s;
    } info_t;

    typedef struct line {
        char *buf;
        char **cmd;
        char **bina;
        int tabs;
    } line_t;

    typedef struct env {
        char *name;
        char *value;
    } env_t;

    typedef struct cd {
        char *home;
        char **oldpwd;
        char *cp;
    } cd_t;

    typedef struct bin {
        char *bin;
        char *bbin;
        char *pbin;
        char **bins;
        int find;
    } bin_t;

    typedef struct link {
        char *str;
        struct link *next;
    } link_t;

    typedef struct global {
        info_t inf;
        line_t line;
        env_t env;
        cd_t cd;
        bin_t bin;
        link_t link;
    } global_t;

#endif /* !struct_h */
