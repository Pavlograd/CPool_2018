/*
** EPITECH PROJECT, 2018
** final_stumper 
** File description:
** simon guvin
*/

#include <unistd.h>
#include "./include/my.h"

int rush3(char *str)
{
    if (str[0] == 'o') {
        my_putstr("[rush1-1] ");
        dimention_checker_rush1(str);
    } else if (str[0] == '*' || str[0] == '/') {
        my_putstr("[rush1-2] ");
        dimention_checker_rush2(str);
    } else {
        check_rush(str);
    }
    return (0);
}
