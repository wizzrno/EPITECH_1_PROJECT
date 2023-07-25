/*
** EPITECH PROJECT, 2023
** cd_flags_path
** File description:
** cd_flags_path
*/

#include "../include/my.h"

void check_cd_flags(global_t *all, char **env, link_t *head)
{
    if (all->line.cmd[1][0] == '~') {
        get_home_path(all,env);
    }
    if (all->line.cmd[1][0] == '-') {
        get_last_path(all,head);
    }
}

void cd_flags_path(global_t *all, char **env, link_t *head)
{
    int find = 0;
    char *chemin = malloc(sizeof(char) * 30000);
    if (my_strlen(all->line.cmd[1]) == 1) {
        check_cd_flags(all,env,head);
    } else {
        if (chdir(all->line.cmd[1]) == -1) {
            perror(all->line.cmd[1]);
            exit(0);
        } else {
            find = 1;
        }
    }
    if (find == 1) {
        chemin = getcwd(chemin,30000);
        cmd_setenv("PWD",chemin,head);
    }
}
