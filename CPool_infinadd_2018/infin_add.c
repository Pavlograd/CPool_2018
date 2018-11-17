/*
** EPITECH PROJECT, 2018
** infin_add
** File description:
** infin_add project
*/

#include <stdlib.h>
#include <unistd.h>
#include "./include/my.h"

char *first_sup_second(char *first, char *second)
{
    int len1 = my_strlen(first) - 1;
    int len2 = my_strlen(second) - 1;
    int i = 0;
    char *addition = malloc(sizeof(char) * (my_strlen(first) + 1));

    for (int lenght = my_strlen(first); lenght >= 0; lenght--) {
        if (len2 >= 0) {
            addition[len1] += first[len1] + second[len2] - 48 + i;
            len2--;
        } else {
            addition[len1] += first[len1] + i;
        }
        i = 0;
        if (addition[len1] > 57) {
            i++;
            addition[len1] = addition[len1] - 10;
            len1_display_one(len1);
        }
        len1--;
    }
    my_putstr_inf(addition);
}

char *second_sup_first(char *first, char *second)
{
    int len1 = my_strlen(first) - 1;
    int len2 = my_strlen(second) - 1;
    int i = 0;
    char *addition = malloc(sizeof(char) * (my_strlen(second) + 1));

    for (int lenght = my_strlen(second); lenght >= 0; lenght--) {
        if (len1 >= 0) {
            addition[len2] += first[len1] + second[len2] - 48 + i;
            len1--;
        } else {
            addition[len2] += second[len2] + i;
        }
        i = 0;
        if (addition[len2] > 57) {
            i++;
            addition[len2] = addition[len2] - 10;
            len2_display_one(len2);
        }
        len2--;
    }
    my_putstr_inf(addition);
}

int my_putstr_inf(char const *str)
{
    int i = 0;

    if (str[0] == '0') {
        while (str[i] == '0')
            i++;
        while (str[i] != '\0') {
            my_putchar(str[i]);
            i++;
        }
    } else {
        while (str[i] != '\0') {
            my_putchar(str[i]);
            i++;
        }
    }
}

char *first_sup_second_sub(char *first, char *second)
{
    int len1 = my_strlen(first) - 1;
    int len2 = my_strlen(second) - 1;
    int i = 0;
    char *addition = malloc(sizeof(char) * (my_strlen(first) + 1));

    for (int lenght = my_strlen(first); lenght >= 0; lenght--) {
        if (len2 >= 0) {
            addition[len1] += first[len1] - second[len2] + 48 - i;
            len2--;
        } else {
            addition[len1] += first[len1] - i;
        }
        i = 0;
        if (addition[len1] < 48) {
            i++;
            addition[len1] = addition[len1] + 10;
        }
        len1--;
    }
    my_putstr_inf(addition);
}

char *second_sup_first_sub(char *first, char *second)
{
    int len1 = my_strlen(first) - 1;
    int len2 = my_strlen(second) - 1;
    int i = 0;
    char *addition = malloc(sizeof(char) * (my_strlen(second) + 1));

    for (int lenght = my_strlen(second); lenght >= 0; lenght--) {
        if (len1 >= 0) {
            addition[len2] += first[len1] - second[len2] + 48 - i;
            len1--;
        } else {
            addition[len2] += second[len2] - i;
        }
        i = 0;
        if (addition[len2] < 48) {
            i++;
            addition[len2] = addition[len2] + 10;
        }
        len2--;
    }
    my_putstr_inf(addition);
}
