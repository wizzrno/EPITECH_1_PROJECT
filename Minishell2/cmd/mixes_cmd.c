/*
** EPITECH PROJECT, 2023
** mixes_cmd
** File description:
** mixes_cmd
*/

#include "../include/my.h"

void execute_cmd(global_t *all, char *str, char **env)
{
    char **tmp = str_to_array(str," \t");
    char *lst = concat_array("/bin/",tmp[0]);
    int pid = getpid();
    int stat;
    pid = fork();
    if (pid == 0) {
        execve(lst,tmp,env);
    } else {
        wait(&stat);
    }
}

int execute_second_cmd(global_t *all, char **env, int *pipefd)
{
    int stat;
    int pid2 = getpid();
    int my_stdin;
    pid2 = fork();
    if (pid2 == 0) {
        dup2(pipefd[1], 1);
        close(pipefd[0]);
        execute_cmd(all,all->line.cmd[0],env);
        exit(0);
    } else {
        waitpid(pid2, &stat, 0);
        my_stdin = dup(STDIN_FILENO);
        dup2(pipefd[0],0);
        close(pipefd[1]);
        execute_cmd(all,all->line.cmd[1],env);
        dup2(my_stdin, 0);
        close(my_stdin);
    }
}

void mixes_cmd(global_t *all, char **env)
{
    all->line.cmd = str_to_array(all->line.buf, "|\n");
    int tabs = count_nb_tab(all->line.cmd);
    int *pipefd = malloc(sizeof(int) * 2);
    pipe(pipefd);
    if (tabs == 2) {
        execute_second_cmd(all,env,pipefd);
    }
    close(pipefd[0]);
    close(pipefd[1]);
}
