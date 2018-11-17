/*
** EPITECH PROJECT, 2018
** my_rev_list
** File description:
** task03
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *prev;

    while (begin != NULL) {
        next = begin-> next;
        begin-> next = prev;
        prev = begin;
        begin = next;
    }
}
