/*
** EPITECH PROJECT, 2018
** dimention_checker 
** File description:
** simon gauvin
*/
#include <unistd.h>
#include "./include/my.h"

int dimention_checker_rush1(char *str)
{
    int len = 1;
    int height = 0;

    if (str[len] == '-') {
        while (str[len] == '-') {
            len++;
        }
        len++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            height++;
    }
    my_put_nbr(len);
    my_putchar(' ');
    my_put_nbr(height);
    return (0);
}

int dimention_checker_rush2(char *str)
{
    int len = 1;
    int height = 0;
	
    if (str[len] == '*') {
        while (str[len] == '*') {
            len++;
        }
        len++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            height++;
    }
    if (height == 1 && len > 1)
        len--;
    my_put_nbr(len);
    my_putchar(' ');
    my_put_nbr(height);
    return (0);
}

int dimention_checker_rush3(char *str)
{
    int len = 1;
    int height = 0;

    if (str[len] == 'B') {
        while (str[len] == 'B') {
            len++;
        }
        len++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            height++;
    }
    my_put_nbr(len);
    my_putchar(' ');
    my_put_nbr(height);
    return (0);
}

int dimention_checker_rush4(char *str)
{
    int len = 1;
    int height = 0;

    if (str[len] == 'A') {
        while (str[len] != 'C') {
            len++;
        }
        len++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            height++;
    }
    my_put_nbr(len);
    my_putchar(' ');
    my_put_nbr(height);
    return(0);
}
