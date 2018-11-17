/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** lib
*/

#include <stdio.h>
#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int limit = 0;

    if (n <= 0) {
        return (0);
    }
    for (limit = 0; src[limit] != '\0' && limit < n; limit++) {
        dest[limit] = src[limit];
    }
    dest[limit] = '\0';
    return dest;
}
