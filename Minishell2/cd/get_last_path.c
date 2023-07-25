/*
** EPITECH PROJECT, 2023
** get_last_path
** File description:
** get_last_path
*/

#include "../include/my.h"

void get_oldpwd(global_t *all, char *str)
{
    int n = 7;
    int j = 0;
    while (str[n] != '\0') {
        all->cd.oldpwd[0][j] = str[n];
        j++;
        n++;
    }
    my_putstr(all->cd.oldpwd[0]);
    my_putchar('\n');
    chdir(all->cd.oldpwd[0]);
}

void get_last_path(global_t *all, link_t *head)
{
    int find = 0;
    link_t *lst = malloc(sizeof(link_t));
    lst = head;
    all->cd.oldpwd = malloc(sizeof(char *) * 2);
    for (int i = 0; i < 2; i++) {
        all->cd.oldpwd[i] = malloc(sizeof(char) * 30000);
    }
    while (lst != NULL) {
        if (compare_narray(lst->str,"OLDPWD=",7) == 0) {
            find = 1;
            get_oldpwd(all,lst->str);
            break;
        }
        lst = lst->next;
    }
    if (find != 1)
        my_putstr("OLDPWD: not set\n");
}
