/*
** EPITECH PROJECT, 2018
** main test match
** File description:
** match
*/

#include <unistd.h>
#include "../include/my.h"

int main(void)
{
    match("Hello", "Hello");
    match("Hello", "H*llo");
    match("Hello", "H**ll*");
    match("Hello", "H**l**l**o");
    match("Hello", "*ello");
    match("Hello", "*");
    match("Hello", "H*");
    match("Hello", "*H");
    match("Hello", "*H*");
    match("Hello", "Hallo");
    match("Hello", "Hell");
    match("Hello", "Belloo");
    match("Hello", "H**l***b");
    match("Hello", "H");
}
