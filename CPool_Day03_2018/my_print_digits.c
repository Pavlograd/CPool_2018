/*
** EPITECH PROJECT, 2018
** my_print_digits
** File description:
** task03
*/


#include <stdio.h>
#include <unistd.h>

int my_print_digits(void)
{
    int digit=47;
    char digits=digit;

    while (digits < 57) {
        digits++;
	my_putchar(digits);
    }

    return (0);
}

