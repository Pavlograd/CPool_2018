/*
** EPITECH PROJECT, 2018
** tree
** File description:
** projet01
*/

void my_putchar(char c) {
    printf("%c", c);
}

int log_tree(int size)
{
    int i = 0;
    int j = 0;
    int k = 0;

    if (size % 2 == 1) {
        k = size;
    } else {
        k = size + 1;
    }
    for (j = 0; j < size; j++) {
        for (i = 0; i < size * size - k + size / 2; i++) {
            my_putchar(' ');
        }    
        for (i = 0; i < k; i++) {
            my_putchar('|');
        }
        my_putchar('\n');
    }
}

int center_tree(int size)
{
    int lines = 2;
    int stars = 0;
    int k = size * size;
    int blanks;

    first_tree(size);
    for (lines = 2; lines < k; lines++) {
        for (blanks = k - lines - 1; blanks > 0; blanks--) {
        my_putchar(' ');
        }    
        for (stars = (2 * lines) + 1; stars > 0; stars--) {
            my_putchar('*');
        }
        my_putchar('\n');
    }
}

int first_tree(int size)
{
    int lines = 0;
    int max_lines = 4;
    int blanks;
    int stars = 0;

    for (lines = 0; lines < max_lines; lines++) {
        for (blanks = size * size - lines - 1; blanks > 0; blanks--) {
            my_putchar(' ');
        }    
        for (stars = (2 * lines) + 1; stars > 0; stars--) {
            my_putchar('*');
        }
        my_putchar('\n');
    }
}

int size_equalone(int size)
{
    size = 2;
    first_tree(size);
    size = 1;
    my_putchar(' ');
    my_putchar(' ');
    my_putchar(' ');
    log_tree(size);
}    

void tree(int size)
{
    if (size <= 0) {
        return (0);
    } else if (size == 1) {
        size_equalone(size);
    } else {
        center_tree(size);
        log_tree(size);
    }
} 

void main() {

    tree(0);
    printf("\n\n");
    tree(-1);
    printf("\n\n");
    tree(2);
    printf("\n\n");
    tree(1);
    printf("\n\n");
}
