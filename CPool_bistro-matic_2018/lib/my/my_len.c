/*
** EPITECH PROJECT, 2018
** my_len
** File description:
** eval_expr
*/

#include "lib.h"

int my_len(int nb, char *str)
{
    int i = 0;
    int len = my_intlen(nb);

    if (str[0] == '-') {
        while (str[i] == '-') {
            i++;
        }
        if ((i % 2) != 0)
            i--;
    }
    return (len + i);
}
