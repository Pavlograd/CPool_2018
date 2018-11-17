/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec.c
** File description:
** task02
*/

int my_compute_factorial_rec(int nb)
{
    int factorial = 1;
    int temp = nb;

    if (nb < 0 || nb > 12) {
        return (0);
    } else if (nb == 0) {
        return (1);
    } else {
        while (nb > 0) {
            return (nb * my_compute_factorial_rec (nb - 1));
        }
    }
}
