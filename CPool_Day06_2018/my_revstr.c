/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** task03
*/

char *my_revstr(char *str)
{
    int incretion = 0;
    int decretion = 0;
    char c = str[incretion];

    for (decretion = 0; str[decretion] != '\0'; decretion++);
    while (str[incretion] != '\0') {
        str[incretion] = str[incretion];
        str[decretion] = c;
        decretion--;
        incretion++;
    }
    my_putstr(str);
}

int main(void)
{
    my_revstr("Hello");
}
