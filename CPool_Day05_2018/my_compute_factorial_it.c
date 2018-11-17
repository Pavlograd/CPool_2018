/*
** EPITECH PROJECT, 2018
** mu_compute_factorial
** File description:
** task01
*/

int my_compute_factorial_it(int nb)
{
    int factorial = 1;
    int temp = nb;

    if (nb < 0 || nb > 12) {
        return (0);
    } else if (nb == 0) {
        return (1);
    } else {
        while (temp > 1) {
            nb = nb * factorial;
            factorial++;
            temp--;
        }
        return (nb);
    }
}
