/*
** EPITECH PROJECT, 2018
** my_str_to_word_array
** File description:
** task04
*/

#include <string.h>
#include <stdlib.h>

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int len = my_strlen(str);
    char *src;

    src = malloc(len + 1);
    for (i = 0;  i < str[i] != '\0'; i++) {
        my_putstr(str[i]);
        my_putchar('\n');
    }
    free(src);
}

int main(void)
{
    char the_word[] = {"Hello", 0};

    my_str_to_word_array(the_word);
}
