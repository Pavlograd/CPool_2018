/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** simon gauvin
*/

#include <stdio.h>
#include <unistd.h>
#include "./include/my.h"

int main()
{
    char buff[BUFSIZ + 1];
    int off = 0;
    int len;
    
    while ((len = read(0, buff + off, BUFSIZ - off)) > 0) {
            off = off + len;
    }
    buff[off] = '\0';
    if (len < 0)
        return(84);
    rush3(buff);
    my_putchar('\n');
    return(0);
}

