/*
** EPITECH PROJECT, 2018
** my_show_word_array
** File description:
** task03
*/

#include <string.h>
#include <stdlib.h>

int my_show_word_array(char * const *tab)
{
    int i = 0;
    int len = my_strlen(tab);
    char *str;

    str = malloc(len + 1);
    for (i = 0;  i < tab[i] != '\0'; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    free(str);
}
