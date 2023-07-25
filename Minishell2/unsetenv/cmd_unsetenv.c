/*
** EPITECH PROJECT, 2023
** cmd_unsetenv
** File description:
** cmd_unsetenv
*/

#include "../include/my.h"

link_t *remove_node(link_t *lst, link_t *prev, link_t *head)
{
    if (lst == head) {
        head = head->next;
    }
    if (prev != NULL) {
        prev->next = lst->next;
    }
    free(lst);
    return (head);
}

link_t *cmd_unsetenv(char *name, link_t *head)
{
    link_t *lst = malloc(sizeof(link_t));
    link_t *prev = NULL;

    lst = head;
    while (lst != NULL) {
        if (compare_narray(lst->str,name,my_strlen(name)) == 0) {
            head = remove_node(lst,prev,head);
            return head;
        }
        prev = lst;
        lst = lst->next;
    }
    return head;
}
