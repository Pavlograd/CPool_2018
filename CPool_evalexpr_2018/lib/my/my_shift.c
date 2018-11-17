/*
** EPITECH PROJECT, 2018
** my_shift
** File description:
** shift a chain
*/

#include "my_include.c"

char *my_shift(char *s1)
{
    int length_1 = my_strlen(s1);

    while (length_1 != -1) {
        s1[length_1 + 1] = s1[length_1];
        length_1--;
    }
    return (s1);
}
