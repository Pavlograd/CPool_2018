/*
** EPITECH PROJECT, 2018
** my_params_to_list
** File description:
** task01
*/

#include <stdlib.h>
#include "./include/my.h"
#include "./include/mylist.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i = 0;
    struct linked_list *list = NULL;

    while (i <= ac - 1) {
        my_put_list(&list, av[i]);
        i++;
    }
}

int my_show_list(struct linked_list *list)
{
    struct linked_list *temp;

    temp = list;
    while (temp != NULL) {
        my_putstr(temp-> data);
        my_putchar('\n');
        temp = temp-> next;
    }
}

int my_put_list(struct linked_list **list, char *av)
{
    struct linked_list *temp;

    temp = malloc(sizeof(list));
    temp-> data = av;
    temp-> next = *list;
    *list = temp;
    return list;
}
