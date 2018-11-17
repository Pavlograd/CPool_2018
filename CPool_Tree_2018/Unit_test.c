/*
** EPITECH PROJECT, 2018
** Unit_test
** File description:
** tree
*/

#include <stdio.h>

void my_putchar(char c)
{
  write(1, &c,  1);
}

int size_test(int size)
{
    tree(size);
    my_putchar('\n');
    my_putchar('\n');  
}

void main()
{
    size_test(-1);
    size_test(0);
    size_test(1);
    size_test(5);
}
