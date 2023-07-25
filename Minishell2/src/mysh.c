/*
** EPITECH PROJECT, 2023
** mysh
** File description:
** mysh
*/

#include "../include/my.h"

void mysh(global_t *all, char **env)
{
    size_t len = 30000;
    ssize_t gl = 0;
    get_bin_env(all,env);
    link_t *head = NULL;
    head = check_env(env,head);
    all->line.buf = malloc(sizeof(char) * len);
    if (isatty(0)) {
        my_putstr("$> ");
    }
    while (1) {
        gl = getline(&all->line.buf, &len, stdin);
        if (gl == -1)
            break;
        if (compare_array(all->line.buf,"exit\n") == 0)
            break;
        get_cmd(all,env,head);
        if (isatty(0))
            my_putstr("$> ");
    }
}
