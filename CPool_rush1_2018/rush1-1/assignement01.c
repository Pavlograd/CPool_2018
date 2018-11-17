/*
** EPITECH PROJECT, 2018
** *.c
** File description:
** assignement 1
*/

int longueur(int x)
{
    int i = 0;
    
    my_putchar('o');
    while (i < x - 2) {
	my_putchar('-');
	i++;
    }	
    my_putchar('o');
}

int largeur(int x)
{
    int i = 0;
    
    my_putchar('|');
    while (i < x - 2) {
	my_putchar(' ');
	i++;
    }	
    my_putchar('|');
}

int error(int x, int y)
{
    if(x <= 0 || y <= 0) {
        write(2, "Invalid size", 13);
    }
}

int xequalone(int x, int y)
{
    int i = 0;
    
    my_putchar('o');
    if (y > 1) {
	my_putchar('\n');
	while (i < y - 2) {
	    my_putchar('|');
	    my_putchar('\n');
	    i++;
        }
        my_putchar('o');
    }
}

int yequalone(int x, int y)
{
    int i = 0;
    
    my_putchar('o');
    while (i < x - 2) {
	my_putchar('-');
	i++;
    }	
    my_putchar('o');    
}

int ybetter(int x, int y)
{
    if (y > 1 && x != 1 && x > 0) {
        longueur(x);
    }
}

void rush(int x, int y)
{
    int i = 0;
    int j = 0;
    
    error(x, y);
    ybetter(x, y);
    yequalone(x, y);
    if (x == 1) {
	xequalone(x, y);
    } else if (x > 1 && y > 1) {
        my_putchar('\n');
        while (j < y - 2){
            largeur(x);
            my_putchar('\n');
	    j++;
        }
    }
    if (x > 1 && y != 1 && y > 0) {
        longueur(x);
    }
    my_putchar('\n');
}
