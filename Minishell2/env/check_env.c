/*
** EPITECH PROJECT, 2023
** check_env
** File description:
** check_env
*/

#include "../include/my.h"

link_t *check_env(char **env,  link_t *head)
{
    if (count_nb_tab(env) == 0) {
        head = cmd_env(env,head);
    } else {
        head = cmd_env(env,head);
    }
    return head;
}
