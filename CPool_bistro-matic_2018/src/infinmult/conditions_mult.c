/*
** EPITECH PROJECT, 2018
** conditions
** File description:
** infin_add
*/

#include <stdlib.h>
#include "../../include/my.h"

int conditions_mult(char *first, char *second)
{
    if (first[0] != '-' && second[0] != '-')
        mult(first, second);
    if (first[0] == '-' && second[0] == '-')
        mult(first + 1, second + 1);
    if (first[0] == '-' && second[0] != '-') {
        my_putchar('-');
        mult(first + 1, second);
    }
    if (first[0] != '-' && second[0] == '-') {
        my_putchar('-');
        mult(first, second + 1);
    }
}
