/*
** EPITECH PROJECT, 2018
** infin_mult
** File description:
** bistro-matic
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

char *my_mod(char *first, char *second)
{
    int i = 0;
    int len1 = my_strlen(first) - 1;
    int len2 = my_strlen(second) - 1;
    char *mod = malloc(sizeof(char) * (len1 + len2 + 3));

    for (int lenght = len1 + len2; lenght >= 0; lenght--) {
        first[len1] -= '0';
        second[len2] -= '0';
        mod[lenght] += (first[len1] % second[len2]);
        mod[lenght] += 48;
        len1--;
        len2--;
    }
    my_putstr_inf(mod);
}
