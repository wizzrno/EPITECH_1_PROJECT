/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/my.h"

int main(int ac, char **av, char **env)
{
    global_t all;
    (void) av;
    if (ac != 1) {
        write(2,"usage: ./mysh\n",15);
        return 84;
    } else {
        mysh(&all,env);
    }
    return 0;
}
