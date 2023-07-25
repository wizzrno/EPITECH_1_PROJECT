/*
** EPITECH PROJECT, 2023
** get_cmd
** File description:
** get_cmd
*/

#include "../include/my.h"

void get_cmd_s(global_t *all, char **env, link_t *head)
{
    int dbl_cmd = 0;
    for (int i = 0; all->line.buf[i]; i++) {
        if (all->line.buf[i] == ';') {
            dbl_cmd = 1;
            separate_cmd(all,env);
            break;
        }
        if (all->line.buf[i] == '|') {
            mixes_cmd(all,env);
        }
    }
    if (dbl_cmd != 1) {
        all->line.cmd = str_to_array(all->line.buf," \n\t");
        if (check_cmd(all,env,head) == 0) {
            check_if_bin(all,env,head);
        }
    }
}

void get_cmd(global_t *all, char **env, link_t *head)
{
    if (!(my_strlen(all->line.buf) == 1)) {
        get_cmd_s(all,env,head);
    }
}
