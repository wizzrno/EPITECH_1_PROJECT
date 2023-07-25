/*
** EPITECH PROJECT, 2023
** my_h
** File description:
** my_h
*/

#ifndef my_h
    #define my_h
    #include "struct.h"
    #include "my_lib.h"
    #include "../lib/my/include/str_arr.h"
    #include <fcntl.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <signal.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <string.h>

    void mysh(global_t *all, char **env);
    void get_cmd(global_t *all, char **env, link_t *head);
    int check_cmd(global_t *all, char **env, link_t *head);
    void get_bin_env(global_t *all, char **env);
    void check_if_bin(global_t *all, char **env, link_t *head);
    void add_bin_before(global_t *all, char **env);

    void cmd_cd(global_t *all, char **env, link_t *head);
    void get_home_path(global_t *all, char **env);
    void cd_flags_path(global_t *all, char **env, link_t *head);
    void get_last_path(global_t *all, link_t *head);
    void print_env(link_t *start);
    link_t *cmd_env(char **env, link_t *head);
    link_t *cmd_setenv(char *name, char *value, link_t *head);
    link_t *cmd_unsetenv(char *name, link_t *head);
    void free_arrays(global_t *all);
    int check_alpha(char *name);
    link_t *check_env(char **env,  link_t *head);
    int get_errros(char *name);
    char *add_path_path(char *path);
    void separate_cmd(global_t *all, char **env);
    void mixes_cmd(global_t *all, char **env);

#endif /* !my_h */
