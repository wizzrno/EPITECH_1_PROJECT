/*
** EPITECH PROJECT, 2023
** check_cmd
** File description:
** check_cmd
*/

#include "../include/my.h"

link_t *check_setenv(global_t *all, link_t *head)
{
    if (count_nb_tab(all->line.cmd) == 1) {
        print_env(head);
    }
    if (count_nb_tab(all->line.cmd) == 2) {
        head = cmd_setenv(all->line.cmd[1],"\0",head);
    }
    if (count_nb_tab(all->line.cmd) == 3) {
        head = cmd_setenv(all->line.cmd[1],all->line.cmd[2],head);
    }
    if (count_nb_tab(all->line.cmd) > 3) {
        my_putstr("setenv: Too many arguments.\n");
    }
    return head;
}

link_t *check_unsetenv(global_t *all, link_t *head)
{
    int tabs = count_nb_tab(all->line.cmd);
    if (count_nb_tab(all->line.cmd) == 1) {
        my_putstr("unsetenv: Too few arguments.\n");
    } else {
        for (int i = 1; i != tabs; i++) {
            head = cmd_unsetenv(all->line.cmd[i],head);
        }
    }
    return head;
}

int check_cmd(global_t *all, char **env, link_t *head)
{
    if (compare_array(all->line.cmd[0],"cd") == 0) {
        cmd_cd(all,env,head);
        head = cmd_setenv("OLDPWD=",all->cd.cp,head);
        return 1;
    } else if (compare_array(all->line.cmd[0],"env") == 0) {
        print_env(head);
        return 1;
    }
    if (compare_array(all->line.cmd[0],"setenv") == 0) {
        head = check_setenv(all,head);
        return 1;
    } else if (compare_array(all->line.cmd[0],"unsetenv") == 0) {
        head = check_unsetenv(all,head);
        return 1;
    }
    return 0;
}
