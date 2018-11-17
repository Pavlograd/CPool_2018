/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** lib
*/

int my_find_prime_sup(int nb)
{
    int i = 3;

    if (nb == 0 || nb == 1)
        return (2);
    if ((nb % 2 == 0) && (nb != 2))
        return (my_find_prime_sup(nb + 1));
    for (i = 3; i * i <= nb; i = i + 2) {
        if (nb % i == 0)
            return (my_find_prime_sup(nb + 1));
    }
    return (nb);
}
