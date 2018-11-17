/*
** EPITECH PROJECT, 2018
** infin_mult
** File description:
** bistro-matic
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

char display_zero(char const *str)
{
    int count = 0;
    int i = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] == '0')
            count++;
    }
    if (count == my_strlen(str))
        my_putchar('0');
}

char *my_div(char *first, char *second)
{
    int i = 0;
    int len1 = my_strlen(first) - 1;
    int len2 = my_strlen(second) - 1;
    char *div = malloc(sizeof(char) * (len1 + len2 + 3));

    for (int lenght = len1 + len2; lenght >= 0; lenght--) {
        first[len1] -= '0' + i;
        second[len2] -= '0';
        div[lenght] += (first[len1] / second[len2]);
        i = 0;
        if (div[lenght] >= 10) {
            i += (div[lenght] / 10);
        }
        div[lenght] %= 10;
        div[lenght] += 48;
        len1--;
        len2--;
    }
    my_putstr_inf(div);
}

int my_putstr_inf(char const *str)
{
    int i = 0;

    display_zero(str);
    if (str[0] == '0') {
        while (str[i] == '0')
            i++;
        while (str[i] != '\0') {
            my_putchar(str[i]);
            i++;
        }
    } else {
        while (str[i] != '\0') {
            my_putchar(str[i]);
            i++;
        }
    }
}
