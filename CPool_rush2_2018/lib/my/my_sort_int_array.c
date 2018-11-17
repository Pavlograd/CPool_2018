/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** lib
*/

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int j = 0;

    for (j = 0; j < size; j++) {
        for (i = 0; i < size - 1 - i; i++) {
            if (tab[i] > tab[i++]) {
                my_swap(&tab[i], &tab[i++]);
            }
        }
        my_put_nbr(tab[j]);
        my_putchar('\n');
    }
}

int main(void)
{
    int tab[] = {1, 6, 87, 4};

    my_sort_int_array(tab, 4);
}
