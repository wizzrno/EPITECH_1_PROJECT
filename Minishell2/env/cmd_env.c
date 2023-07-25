/*
** EPITECH PROJECT, 2023
** cmd_env
** File description:
** cmd_env
*/

#include "../include/my.h"

void print_env(link_t *start)
{
    link_t *aze = start;
    int i = 0;
    while (aze != NULL) {
        my_putstr(aze->str);
        my_putchar('\n');
        aze = aze->next;
        i++;
    }
}

link_t *cmd_env(char **env, link_t *head)
{
    link_t *current = NULL;
    for (int i = 0; env[i]; i++) {
        link_t *link = malloc(sizeof(link_t));
        link->str = env[i];
        link->next = NULL;
        if (head == NULL) {
            head = link;
            current = link;
        } else {
            current->next = link;
            current = link;
        }
    }
    return head;
}
