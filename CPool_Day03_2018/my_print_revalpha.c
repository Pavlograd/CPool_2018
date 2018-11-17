/*
** EPITECH PROJECT, 2018
** my_print_revalpha.c
** File description:
** task02
*/

#include <stdio.h>
#include <unistd.h>

int my_print_revalpha(void)
{
    int z=123;
    char revalphabet=z;

    while (revalphabet > 97) {
        revalphabet--;
	my_putchar(revalphabet);
    }

    return (0);
}
