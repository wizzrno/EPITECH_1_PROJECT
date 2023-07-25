/*
** EPITECH PROJECT, 2023
** check_if_bin
** File description:
** check_if_bin
*/

#include "../include/my.h"

void check_if_bin(global_t *all, char **env, link_t *head)
{
    int pid = getpid();
    if (compare_array(all->line.cmd[0],"/usr/bin/env") == 0) {
        print_env(head);
    } else if (compare_narray(all->line.cmd[0],"/bin/",5) == 1
    && compare_narray(all->line.cmd[0],"/usr/bin/",9) == 1) {
        add_bin_before(all,env);
    } else {
        pid = fork();
        if (pid == 0) {
            execve(all->line.cmd[0],all->line.cmd,env);
        } else {
            wait(&all->inf.s);
        }
    }
}
