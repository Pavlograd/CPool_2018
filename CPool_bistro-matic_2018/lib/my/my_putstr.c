/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** task02
*/

#include <stdio.h>
#include <unistd.h>
#include "lib.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
