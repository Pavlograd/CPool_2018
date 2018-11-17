/*
** EPITECH PROJECT, 2018
** rush01
** File description:
** assignement04
*/

int longueur(int x)
{
    int i = 0;
    
    my_putchar('A');
    while (i < x - 2) {
	my_putchar('B');
	i++;
    }	
    my_putchar('C');
}

int largeur(int x)
{
    int i = 0;
    
    my_putchar('B');
    while (i < x - 2) {
	my_putchar(' ');
	i++;
    }	
    my_putchar('B');
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
    
    my_putchar('B');
    if (y > 1) {
	my_putchar('\n');
	while (i < y - 2) {
	    my_putchar('B');
	    my_putchar('\n');
	    i++;
        }
        my_putchar('B');
    }
}

int yequalone(int x, int y)
{
    int i = 0;
    
    my_putchar('B');
    while (i < x - 2) {
	my_putchar('B');
	i++;
    }	
    my_putchar('B');    
}

int ybetter(int x, int y)
{
    if (y > 1 && x != 1 && x > 0) {
        longueur(x);
    }
}

int debugcodingstyle(int x, int y)
{
     int i = 0;
     int j = 0;
    
    if (y == 1 && x != 1) {
        yequalone(x, y);
    } else if (x > 1 && y > 1) {
        my_putchar('\n');
        while (j < y - 2){
           largeur(x);
           my_putchar('\n');
	   j++;
        }
    }
}

void rush(int x, int y)
{
    int i = 0;
    int j = 0;
    
    error(x, y);
    ybetter(x, y);
    if (x == 1 && y != 1) {
	xequalone(x, y);
    }
    if (x == 1 && y == 1) {
	my_putchar('B');
    }	
    debugcodingstyle(x, y);
    if (x > 1 && y != 1 && y > 0) {
        longueur(x);
    }
    my_putchar('\n');
}
