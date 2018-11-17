/*
** EPITECH PROJECT, 2018
** rush2
** File description:
** rush2 Arthur Callens Maurin Liberal 
*/

#include <unistd.h>

void my_put_float(float nb)
{
    int integer_part = (int) nb;
    float decimal_part = (nb - integer_part) * 100;
    int real = (int) decimal_part;

    my_put_nbr(integer_part);
    my_putchar('.');
    my_put_nbr(real);
    if (real == 0)
        my_putchar('0');
}

void get_my_pourcentage(int j, char *str)
{
    int k = 0;
    float pourcentage;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 91 && str[i] > 64) || (str[i] > 96 && str[i] < 123))
            k++;
    }
    pourcentage = (float) j/k * 100;
    my_put_float(pourcentage);
}

int condition(char *str, char *src)
{
    if(src[0] < 65 || src[0] > 122 || (src[0] > 90 && src[0] < 97)
       write(2, "error invalid argument", 22);
       return (86);


}

int rush(char *str, char *src)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == src[0] || str[i] == src[0] + 32 || str[i] == src[0] - 32)
            j++;
    }
    my_putchar(src[0]);
    my_putchar(':');
    my_put_nbr(j);
    write(1," (", 2);
    get_my_pourcentage(j, str);
    write(1,"%)", 2);
    my_putchar('\n');
    return (0);
}
