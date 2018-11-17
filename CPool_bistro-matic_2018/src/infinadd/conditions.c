/*
** EPITECH PROJECT, 2018
** conditions
** File description:
** infin_add
*/

#include <stdlib.h>
#include "../../include/my.h"

int conditions(char *first, char *second)
{
    add(first, second);
    sub_sub(first, second);
    add_sub(first, second);
    sub_add(first, second);
}

int add(char *first, char *second)
{
    if (first[0] != '-' && second[0] != '-') {
        if (my_strlen(first) >= my_strlen(second)) {
            first_sup_second(first, second);
        } else {
            second_sup_first(first, second);
        }
    }
}

int sub_sub(char *first, char *second)
{
    if (first[0] == '-' && second[0] == '-') {
        my_putchar('-');
        if (my_strlen(first) >= my_strlen(second)) {
            first_sup_second(first + 1, second + 1);
        } else {
            second_sup_first(first + 1, second + 1);
        }
    }
}

int add_sub(char *first, char *second)
{
    int len1 = my_strlen(first);
    int len2 = my_strlen(second) - 1;

    if (first[0] != '-' && second[0] == '-') {
        if (len1 > len2 || *second < *first) {
            first_sup_second_sub(first, second + 1);
        } else if (len1 == len2 && first[len1] > second[len2]) {
            first_sup_second_sub(first, second + 1);
        } else {
            my_putchar ('-');
            second_sup_first_sub(first, second + 1);
        }
    }
}

int sub_add(char *first, char *second)
{
    int len1 = my_strlen(first) - 1;
    int len2 = my_strlen(second);

    if (first[0] == '-' && second[0] != '-') {
        if (len1 > len2 || *second > *first) {
            my_putchar('-');
            first_sup_second_sub(first + 1, second);
        } else if (len1 == len2 && first[len1] <= second[len2]) {
            my_putchar('-');
            first_sup_second_sub(first + 1, second);
        } else {
            second_sup_first_sub(first + 1, second);
        }
    }
}
