/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** return number send to the function as a string
*/

#include "my_include.c"

int my_getnbr(char const *str)
{
    int	my_result = 0;
    int	negatif = 1;
    int	i = 0;
    int overflow = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            negatif *= -1;
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            overflow = my_result;
            my_result *=  10;
            if (overflow > my_result)
                return (0);
            my_result += str[i] - '0';
            i++;
        } else
            return (my_result * negatif);
    }
    return (my_result * negatif);
}
