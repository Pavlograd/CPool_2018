/*
** EPITECH PROJECT, 2018
** infin_mult
** File description:
** bistro-matic
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

char *mult(char *first, char *second)
{
    int i = 0;
    int len1 = my_strlen(first) - 1;
    int len2 = my_strlen(second) - 1;
    char *addition = malloc(sizeof(char) * (len1 + len2 + 3));

    for (int lenght = len1 + len2; lenght >= 0; lenght--) {
        first[len1] -= '0';
        second[len2] -= '0' + i;
        addition[lenght] += (first[len1] * second[len2]);
        i = 0;
        if (addition[lenght] >= 10) {
            i += (addition[lenght] / 10);
            my_put_nbr(i);
        }
        addition[lenght] %= 10;
        addition[lenght] += 48;
        len2--;
        first[len1] += '0';
    }
    my_putstr_inf(addition);
}

int my_putstr_inf_mult(char const *str)
{
    int i = 0;

    if (str[0] == '0') {
        my_putchar('0');
        return (0);
    }
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
