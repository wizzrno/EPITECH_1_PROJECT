/*
** EPITECH PROJECT, 2023
** solver
** File description:
** error_case
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

char *strconcat(char *src, char *ext);

int check_char(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i += 1) {
        if (buffer[i] != '*' && buffer[i] != 'X'
        && buffer[i] != '\n' && buffer[i] != '\n' ) {
            return 84;
        }
    }
    return 0;
}

int error_case(int ac ,char **av)
{
    if (ac != 2)
        return 84;
    struct stat bloc;
    stat(av[1], &bloc);
    int file = open(av[1], O_RDONLY);
    if (file == -1)
        return 84;
    if (bloc.st_size == 0)
        return 84;
    char *buffer = malloc(sizeof(char) * (bloc.st_size) + 1);
    int byte = read(file,buffer,bloc.st_size);
    buffer[byte] = '\0';
    buffer = strconcat(buffer,"\n");
    if (buffer[0] != '*' && buffer[byte - 1] != '*') {
        return 84;
    }
    if (check_char(buffer) == 84)
        return 84;
    return 0;
}
