/*
** EPITECH PROJECT, 2018
** conditions
** File description:
** infin_add
*/

#include <stdlib.h>
#include "../../include/my.h"

int conditions_div(char *first, char *second)
{
    sup_zero(second);
    if (first[0] != '-' && second[0] != '-')
        char_comparaison_div(first, second);
    if (first[0] == '-' && second[0] == '-')
        char_comparaison_div(first + 1, second + 1);
    if (first[0] == '-' && second[0] != '-') {
        my_putchar('-');
        char_comparaison_div(first + 1, second);
    }
    if (first[0] != '-' && second[0] == '-') {
        my_putchar('-');
        char_comparaison_div(first, second + 1);
    }
}

int sup_zero(char *second)
{
    int count = 0;
    int len = my_strlen(second);

    for (int i = 0; second[i] != '\0'; i++) {
        if (second[i] == '0')
            count++;
        if (second[i] == '-' || second[i] == '+')
            len--;
    }
    if (len == count)
        exit(84);
    return (0);
}

char char_comparaison_div1(char *first, char *second)
{
    for (int i = 0; first[i] != '\0'; i++) {
        if (first[i] > second[i]) {
            my_div(first, second);
            return (0);
        }
        if (first[i] < second[i]) {
            my_putchar('0');
            return (0);
        }
    }
    my_div(first, second);
    return (0);
}

char char_comparaison_div(char *first, char *second)
{
    if (my_strlen(first) > my_strlen(second)) {
        my_div(first, second);
    } else if (my_strlen(second) > my_strlen(first)) {
        my_putchar('0');
    } else {
        char_comparaison_div1(first, second);
    }
}
