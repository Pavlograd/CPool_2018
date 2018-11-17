/*
** EPITECH PROJECT, 2018
** Match
** File description:
** project02
*/

#include <unistd.h>
#include "./include/my.h"

int len_one_equal_len_two(char const *s1, char const *s2)
{
    int temp = 0;

    for (temp = 0; s2[temp] != '\0'; temp++) {
        if (s1[temp] != s2[temp] && s2[temp] != '*') {
            write(1, "The strings are not the same\n", 30);
            return (0);
        }
    }
    write(1, "The strings are identical\n", 27);
    return (1);
}

int len_one_low_len_two(char const *s1, char const *s2)
{
    int temp = 0;
    int i = 0;

    for (temp = 0; s2[i] != '\0'; temp++) {
        while (s2[i] == '*' && s2[i + 1] == '*') {
            i++;
        }
        if (s1[temp] != s2[i] && s2[i] != '*') {
            write(1, "The strings are not the same\n", 30);
            return (0);
        }
        i++;
    }
    write(1, "The strings are identical\n", 27);
    return (1);
}

int len_one_up_len_two(char const *s1, char const *s2)
{
    int temp = 0;
    int i = 0;

    for (temp = 0; s2[i] != '\0'; temp++) {
        while (s2[i] == '*' ||  s2[i + 1] != s1[temp]) {
            i++;
        }
        if (s1[temp] != s2[i] && s2[temp] != '*') {
            write(1, "The strings are not the same\n", 30);
            return (0);
        }   
    }
    write(1, "The strings are identical\n", 27);
    return (1);
}

int match(char const *s1, char const *s2)
{
    int len_one = my_strlen(s1);
    int len_two = my_strlen(s2);
    int temp = 0;

    if (len_one == len_two) {
        len_one_equal_len_two(s1, s2);
    } else if (len_one < len_two) {
        len_one_low_len_two(s1, s2);
    } else {
        len_one_up_len_two(s1, s2);
    }
}

