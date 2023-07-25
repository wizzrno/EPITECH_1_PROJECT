/*
** EPITECH PROJECT, 2023
** add_bin_before
** File description:
** add_bin_before
*/

#include "../include/my.h"

void exec_bin(global_t *all, char **env)
{
    if (execve(all->line.cmd[0],all->line.cmd,env) == -1) {
        my_putstr(all->line.cmd[0]);
        my_putstr(": Command not found.\n");
        exit(1);
    }
}

void is_my_binary(global_t *all, char **env)
{
    int pid = getpid();
    if (compare_narray(all->line.cmd[0],"./",2) == 0) {
        pid = fork();
        if (pid == 0) {
            exec_bin(all,env);
        } else {
            wait(&all->inf.s);
            exit(1);
        }
    }
}

int execute_cmdd(global_t *all, char **env, int pid)
{
    if (access(all->bin.bbin,F_OK) == 0) {
        all->bin.find = 1;
        pid = fork();
        if (pid == 0) {
            execve(all->bin.bbin,all->line.cmd,env);
        } else {
            wait(&all->inf.s);
            return 1;
        }
    }
    return 0;
}

void add_bin_before(global_t *all, char **env)
{
    bin_t *bin = &all->bin;
    all->bin.find = 0;
    is_my_binary(all,env);
    int pid = getpid();
    for (int i = 0; bin->bins[i]; i++) {
        bin->bin = concat_array(bin->bins[i],"/");
        bin->bbin = concat_array(bin->bin,all->line.cmd[0]);
        if (execute_cmdd(all,env,pid) == 1) {
            break;
        }
    }
    if (all->bin.find != 1) {
        perror(all->line.cmd[0]);
    }
}
