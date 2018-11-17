/*
** EPITECH PROJECT, 2018
** main
** File description:
** infin_add
*/

#include <stdlib.h>
#include "../../include/my.h"

int main(int argc, char **argv)
{
    if (argc == 3) {
        conditions(argv[1], argv[2]);
        my_putchar('\n');
    }
    return (0);
}
