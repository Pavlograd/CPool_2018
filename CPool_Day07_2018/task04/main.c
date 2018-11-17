/*
** EPITECH PROJECT, 2018
** main
** File description:
** task04
*/

int main(int argc, char **argv)
{
    int i = 0;

    for (i = 0; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    return (0);
}
