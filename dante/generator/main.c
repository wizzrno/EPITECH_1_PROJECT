/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "Include/proto.h"

int verifications(int ac, global_t all, char **av)
{
    if (verify_args(ac,av) == 84) {
        return 84;
    } else {
        check_argument(&all,av);
    }
    return 0;
}

int main_suit(int ac, char **av, global_t all)
{
    if (ac == 3) {
        if (verify_args(ac,av) == 84) {
            return 84;
        } else {
            imperfect_map(&all,av);
            break_walls(&all);
        }
    } else if (ac == 4) {
        verifications(ac,all,av);
    } else {
        write(2,"usage: ./genrator x y | [perfect] or [imperfect]",48);
        printf("\n");
        return 84;
    }
    return 0;
}

int main(int ac, char **av)
{
    global_t all;
    if (ac < 3) {
        write(2,"usage: ./genrator x y | [perfect] or [imperfect]",48);
        printf("\n");
        return 84;
    }
    return main_suit(ac,av,all);
}
