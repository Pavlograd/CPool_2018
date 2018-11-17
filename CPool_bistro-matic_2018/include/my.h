/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** task02
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
char *first_sup_second(char *first, char *second);
char *second_sup_first(char *first, char *second);
char *first_sup_second_sub(char *first, char *second);
char *second_sup_first_sub(char *first, char *second);
int my_putstr_inf(char const *str);
int conditions(char *first, char *second);
int add(char *first, char *second);
int sub_sub(char *first, char *second);
int add_sub(char *first, char *second);
int sub_add(char *first, char *second);
int len1_display_one(int len1);
int len2_display_one(int len2);
char display_zero(char const *str);
char *zero(char *str, int len1, int len2);
char *mult(char *first, char *second);
int conditions_mult(char *first, char *second);
char *plus(char *first, char *second);
char *add_mult(char *first, char *second);
char *add_mult1(char *first, char *second);
int my_len(int nb, char *str);
int second_number(char *s);
int my_intlen(int nb);
int my_do_op(int s1, int s2, char op, char *ops);
int return_error(int s2);
char char_comparaison_div1(char *first, char *second);
char char_comparaison_div(char *first, char *second);
int conditions_div(char *first, char *second);
char *my_div(char *first, char *second);
int sup_zero(char *second);
char char_comparaison_mod1(char *first, char *second);
char char_comparaison_mod(char *first, char *second);
int conditions_mod(char *first, char *second);
char *my_mod(char *first, char *second);

#endif /* MY_H_ */
