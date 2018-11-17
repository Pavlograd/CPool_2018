/*
** EPITECH PROJECT, 2018
** condition_2.c
** File description:
** conditions_2.c
*/

int conditions_2(char *first, char *second)
{
    int len1 = my_strlen(first);
    int len2 = my_strlen(second);
    char *result = malloc(sizeof(char) * (my_strlen(first) +1));

    if (first[0] != '-' && second[0] == '-') {
        if (*first < *second) {
            my_putchar ('-');
        }
    }
}

int main(int ac, char **av)
{
    conditions_2(av[1], av[2]);
}
