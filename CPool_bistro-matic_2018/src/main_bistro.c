/*
** EPITECH PROJECT, 2018
** main_bistro.c
** File description:
** bistromatic
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "../include/bistromatic.h"
#include "../include/my.h"

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

static int check_base(char const *b)
{
    char *str = "0123456789";

    for (int i = 0; str[i] != '\0'; i++) {
        if (b[i] != str[i]) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(84);
        }
    }
    if (my_strlen(b) != my_strlen(str)) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(84);
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    size = my_getnbr(av[3]);
    expr = get_expr(size);
    eval_expr(av[1], av[2], expr, size);
    return (EXIT_SUCCESS);
}
