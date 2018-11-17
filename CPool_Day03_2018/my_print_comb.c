/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** task05
*/


#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int number(int h, int d, int u)
{
    my_putchar(h);
    my_putchar(d);
    my_putchar(u);
    my_putchar(',');
    my_putchar(' ');
    
}    

int my_print_comb(void)
{
    int h = 48;
    int d = 49;
    int u = 50;

    for (h = 0; h <= 55; h++) {
	for (d = h + 1; d <= 56; d++) {
	    for (u = d + 1; u <= 57; u++) {
	        number(h, d, u);
	    }
	    u++;
	}
	d++;
	u = 48;    
    }
    h++;
    return (0);
}

int main(void)
{
    my_print_comb();
    return (0);
}
