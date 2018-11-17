/*
** EPITECH PROJECT, 2018
** my_list_size
** File description:
** task02
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./include/mylist.h"

int my_list_size(linked_list_t const *begin)
{
    int size = 0;

    for (size = 0; begin != 0; size++)
        begin = begin-> next;
    return (size);
}
