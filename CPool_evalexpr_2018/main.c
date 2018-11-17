/*
** EPITECH PROJECT, 2018
** eval_expr
** File description:
** Prio calc NPI
*/

#include "./include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2) {
        eval_expr(av[1]);
        my_putchar('\n');
        return (0);
    }
    return (84);
}
