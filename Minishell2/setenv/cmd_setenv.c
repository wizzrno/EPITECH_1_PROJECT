/*
** EPITECH PROJECT, 2023
** cmd_setenv
** File description:
** cmd_setenv
*/

#include "../include/my.h"

link_t *replace_value(char *str, char *value, int n, link_t *tmp)
{
    int j = 0;
    while (value[j] != '\0') {
        str[n] = value[j];
        j++;
        n++;
    }
    str[n] = '\0';
    tmp->str = str;
    return tmp;
}

int check_value(char *lst, char *value, int find, link_t *head)
{
    link_t *tmp = malloc(sizeof(link_t));
    tmp = head;
    while (tmp != NULL) {
        if (compare_narray(tmp->str,lst,my_strlen(lst)) == 0) {
            find = 1;
            tmp = replace_value(tmp->str,value,my_strlen(lst),tmp);
            head->str = tmp->str;
        }
        tmp = tmp->next;
    }
    return find;
}

link_t *fill_head(link_t *new_node, link_t *head)
{
    while (head->next != NULL) {
        head = head->next;
    }
    head->next = new_node;
    return head;
}

link_t *add_node(int find, link_t *new_node, link_t *head)
{
    if (find != 1) {
        if (head == NULL) {
            head = new_node;
        } else {
            head = fill_head(new_node,head);
        }
    }
    return head;
}

link_t *cmd_setenv(char *name, char *value, link_t *head)
{
    link_t *new_node = malloc(sizeof(link_t));
    char *lst = NULL;
    int find = 0;
    if (get_errros(name) == 1) {
        return head;
    } else {
        if (name[my_strlen(name) - 1] == '=') {
            lst = name;
            new_node->str = concat_array(lst,value);
            new_node->next = NULL;
        } else {
            lst = concat_array(name,"=");
            new_node->str = concat_array(lst,value);
            new_node->next = NULL;
        }
        find = check_value(lst,value,find,head);
        head = add_node(find,new_node,head);
    }
    return head;
}
