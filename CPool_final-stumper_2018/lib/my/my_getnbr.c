/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** return number send to the function as a string
*/

int my_getnbr(char const *str)
{
    int nb;
    int r = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
           r *= -1;
        i++;
    }
    for (i; str[i] != '\0'; i++) {
        if (str[i] < 48 && str[i] > 57)
            return (0);
        nb += str[i] - '0';
        nb *= 10;
    }
    nb /= 10;
    return (nb * r);
}
