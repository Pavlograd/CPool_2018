/*
** EPITECH PROJECT, 2018
** check_rush
** File description:
** final stumper
*/

#include "./include/my.h"

int check_rush(char *str)
{
    char r3[] = "[rush1-3] ";
    char r4[] = "[rush1-4] ";
    char r5[] = "[rush1-5] ";

    if (str[0] == 'B') {
        if (str[1] != 'B') {
            my_putstr(r3);
            my_putstr("1 1 || ");
            my_putstr(r4);
            my_putstr("1 1 || ");
            my_putstr(r5);
            my_putstr("1 1");
        } else {
            number_of_b(str);
        }
    } else {
        three_four_five(str);
    }
}

int three_four_five(char *str)
{
    int A = 0;
    int C = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        while (str[i] != C) {
            if (str[i] == 'A')
                A++;
            i++;
        }
        if (A == 2) {
            my_putstr("[rush1-3] ");
            dimention_checker_rush3(str);
        } else if (A == 1) {
            my_putstr("[rush1-4] ");
            dimention_checker_rush4(str);
        } else {
            my_putstr("none");
        }
    }
}

int number_of_b(char *str)
{
    char r3[] = "[rush1-3] ";
    char r4[] = "[rush1-4] ";
    char r5[] = "[rush1-5] ";   
    int i = 0;

    while (str[i] == 'B') {
        i++;
    }
    my_putstr(r3);
    my_put_nbr(i);
    my_putstr(" 1 || ");
    my_putstr(r4);
    my_put_nbr(i);
    my_putstr(" 1 || ");
    my_putstr(r5);
    my_put_nbr(i);
    my_putstr(" 1");
    return (0);
}
