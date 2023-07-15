/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "include/my.h"

int bsq(char const *filepath)
{
    int fd = open(filepath, O_RDWR);
    struct stat files;
    stat(filepath, &files);
    int size = files.st_size;
    char *buffer = malloc(sizeof(char) * size + 1);
    buffer[size] = '\0';
    read(fd, buffer, size);
    convert_char_to_int(copy_map(buffer));
    close(fd);
    return 0;
}

int main(int ac, char **av)
{
    if (ac < 2) {
        return 84;
    } else {
        bsq(av[1]);
    }
}
