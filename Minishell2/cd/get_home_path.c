/*
** EPITECH PROJECT, 2023
** get_home_path
** File description:
** get_home_path
*/

#include "../include/my.h"

void change_directory(global_t *all, char **env, int i)
{
    int n = 5;
    int j = 0;
    while (env[i][n] != '\0') {
        all->cd.home[j] = env[i][n];
        n++;
        j++;
    }
    chdir(all->cd.home);
}

void get_home_path(global_t *all, char **env)
{
    int find = 0;
    all->cd.home = malloc(sizeof(char) * 30000);
    for (int i = 0; env[i]; i++) {
        if (compare_narray(env[i],"HOME=",5) == 0) {
            find = 1;
            change_directory(all,env,i);
        }
    }
    if (find != 1) {
        my_putstr("TERM environment variable not set.\n");
    }
}
