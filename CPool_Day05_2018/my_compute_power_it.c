/*
** EPITECH PROJECT, 2018
** my_compute_power_it.c
** File description:
** task03
*/

int my_compute_power_it(int nb, int p)
{
    int temp = nb;

    if (p < 0) {
        return (0);
    } else if (p == 0) {
        return (1);
    } else {
        while (p > 1) {
            nb = nb * temp;
            p--;
        }
        return (nb);
    }
}
