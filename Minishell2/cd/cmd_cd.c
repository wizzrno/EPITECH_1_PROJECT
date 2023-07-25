/*
** EPITECH PROJECT, 2023
** cmd_cd
** File description:
** cmd_cd
*/

#include "../include/my.h"

void get_past_path(global_t *all, link_t *head)
{
    all->cd.cp = malloc(sizeof(char) * 2000);
    all->cd.cp = getcwd(all->cd.cp,2000);
}

void cmd_cd(global_t *all, char **env, link_t *head)
{
    get_past_path(all,head);
    if (count_nb_tab(all->line.cmd) == 1) {
        if (compare_array(all->line.cmd[0],"cd") == 0) {
            get_home_path(all,env);
        }
    } else if (count_nb_tab(all->line.cmd) == 2) {
        cd_flags_path(all,env,head);
    } else {
        perror(all->line.cmd[0]);
        exit(0);
    }
}
