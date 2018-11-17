/*
** EPITECH PROJECT, 2018
** main_test
** File description:
** rush2 Arthur Callens Maurin Liberal
*/

int test(int argc, char **argv)
{
    int i = 2;

    if (argc < 2) {
        write(2, "not enough arguments\n", 21);
        return (84);
    }
    while (i < argc) {
        rush(argv[1], argv[i]);
        i = i + 1;
    }
}

int main(void)
{
    test(4, "J'aime le pain", a);
}
