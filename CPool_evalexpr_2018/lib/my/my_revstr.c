/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** lib
*/

#include <stdio.h>
#include <stdlib.h>

char *my_revstr(char *str)
{
    int incretion = 0;
    int decretion = my_strlen(str) - 1;
    int lol = my_strlen(str);

    while (decretion > incretion) {
        my_swap(&str[incretion], &str[decretion]);
        incretion++;
        decretion--;
    }
}
