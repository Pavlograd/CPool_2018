/*
** EPITECH PROJECT, 2018
** assignement02
** File description:
** rush01
*/

int longueur1(int x)
{
    int i = 0;
    
    my_putchar('/');
    while (i < x - 2) {
	my_putchar('*');
	i++;
    }	
    my_putchar(92);
}

int longueur2(int x)
{
    int i = 0;
    
    my_putchar(92);
    while (i < x - 2) {
	my_putchar('*');
	i++;
    }	
    my_putchar('/');
}

int largeur(int x)
{
    int i = 0;
    
    my_putchar('*');
    while (i < x - 2) {
	my_putchar(' ');
	i++;
    }	
    my_putchar('*');
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
    
    my_putchar('*');
    if (y > 1) {
	my_putchar('\n');
	while (i < y - 2) {
	    my_putchar('*');
	    my_putchar('\n');
	    i++;
        }
        my_putchar('*');
    }
}

int yequalone(int x, int y)
{
    int i = 0;
    
    my_putchar('*');
    while (i < x - 2) {
	my_putchar('*');
	i++;
    }	
    my_putchar('*');    
}

int ybetter(int x, int y)
{
    if (y > 1 && x != 1 && x > 0) {
        longueur1(x);
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
	my_putchar('*');
    }	
    debugcodingstyle(x, y);
    if (x > 1 && y != 1 && y > 0) {
        longueur2(x);
    }
    my_putchar('\n');
}
