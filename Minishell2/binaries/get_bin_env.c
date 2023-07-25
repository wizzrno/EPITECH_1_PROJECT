/*
** EPITECH PROJECT, 2023
** get_bin_env
** File description:
** get_bin_env
*/

#include "../include/my.h"

void copy_binary_path(global_t *all, char **env, int i)
{
    all->bin.pbin = malloc(sizeof(char) * my_strlen(env[i]) + 1);
    int n = 5;
    int j = 0;
    while (env[i][n] != '\0') {
        all->bin.pbin[j] = env[i][n];
        j++;
        n++;
    }
    all->bin.bins = str_to_array(all->bin.pbin,":");
}

void get_bin_env(global_t *all, char **env)
{
    for (int i = 0; env[i]; i++) {
        if (compare_narray(env[i],"PATH=",5) == 0) {
            copy_binary_path(all,env,i);
        }
    }
}
