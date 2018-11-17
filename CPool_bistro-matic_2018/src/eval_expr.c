/*
** EPITECH PROJECT, 2018
** eval_expr
** File description:
** eval_expr
*/

#include "../include/my.h"
#include <stdlib.h>

char eval_expr(char *base, char *ops, char *expr, unsigned int size)
{
    int nb1 = my_getnbr(expr);
    int nb2 = second_number(expr);
    int len = my_len(nb1, expr);
    char operator = expr[len];
    int result = my_do_op(nb1, nb2, operator, ops);

    my_put_nbr(result);
}

int second_number(char *s)
{
    int i = 0;
    int j = 0;
    int nb;
    char *src = malloc(sizeof(char) * my_strlen(s));

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            if (s[i + 1] < '0' || s[i + 1] > '9') {
                i = i + 2;
                while (s[i] != '\0') {
                    src[j] += s[i];
                    i++;
                    j++;
                }
                break;
            }
        }
    }
    my_getnbr(src);
}

int my_do_op(int s1, int s2, char op, char *ops)
{
    if (op == ops[2])
        return (s1 + s2);
    if (op == ops[3])
        return (s1 - s2);
    if (op == ops[6]) {
        if (s2 == 0)
            return_error(s2);
        return (s1 % s2);
    }
    if (op == ops[4])
        return (s1 * s2);
    if (op == ops[5]) {
        if (s2 == 0)
            return_error(s2);
        return (s1 / s2);
    }
    else
        return s1;
}

int return_error(int s2)
{
    my_putstr("syntax error");
    exit(84);
}
