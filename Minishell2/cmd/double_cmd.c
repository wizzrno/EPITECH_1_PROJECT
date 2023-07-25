/*
** EPITECH PROJECT, 2023
** double cmd
** File description:
** double cmd
*/

#include "../include/my.h"

void execute_dbl_cmd(char *str, char **env)
{
    char **tmp = str_to_array(str, " \t");
    char *lst = NULL;
    lst = concat_array("/bin/",tmp[0]);
    execve(lst,tmp,env);
}

void separate_cmd(global_t *all, char **env)
{
    all->line.cmd = str_to_array(all->line.buf, ";\n");
    int tabs = count_nb_tab(all->line.cmd);
    int pids = getpid();
    for (int i = 0; i < tabs; i++) {
        pids = fork();
        if (pids == 0) {
            execute_dbl_cmd(all->line.cmd[i], env);
        } else {
            wait(&all->inf.s);
        }
    }
}
