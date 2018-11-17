/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** task01
*/

#include <string.h>

char *my_strdup(char const *src)
{
    int i = 0;
    int len = my_strlen(src);
    char *str;

    str = malloc(len +1);
    while (i < len) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return str;
    free(str);
}
