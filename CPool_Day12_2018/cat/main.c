/*
** EPITECH PROJECT, 2018
** main
** File description:
** task01
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

int my_cat(int ac, char *av)
{
    int fd;
    int dir;
    char buffer[30000];
    int size;

    fd = open(av, O_RDONLY);
    if (fd == -1) {
        my_putstr("Error with open\n");
        return (84);
    }
    dir = open(av, O_DIRECTORY);
    if (dir > 0) {
        my_putstr("It's a Directory\n");
        return (84);
    }
    size = read(fd, buffer, sizeof(buffer));
    buffer[size] = '\0';
    my_putstr(buffer);
    close(fd);
    return (0);
}

int my_option(void)
{
    int i = 1;
    int size;
    char buffer[21504];

    while (0 < i) {
        read(0, buffer, sizeof(buffer));
        if (buffer[0] == NULL)
            return (0);
        size = sizeof(buffer);
        my_putstr(buffer);
        buffer[size] = '\0';
    }
    return (0);
}

int main(int ac, char **av)
{
    int i = 1;

    if (ac < 2) {
        my_option();
    }
    for (i = 1; i < ac; i++) {
        my_cat(ac, av[i]);
    }
    return (0);
}
