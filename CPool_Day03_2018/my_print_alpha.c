/*
** EPITECH PROJECT, 2018
** my_print_alpha.c
** File description:
** task01
*/

#include <stdio.h>
#include <unistd.h>

int my_print_alpha(void)
{
    int a=96;
    char alphabet=a;

    while (alphabet < 122) {
        alphabet++;
	my_putchar(alphabet);
    }

    return (0);
}
