/*
** EPITECH PROJECT, 2018
** do_op
** File description:
** basic calc
*/

int my_do_op(int s1, char op, int s2)
{
    if (op == '+')
        return (s1 + s2);
    if (op == '-')
        return (s1 - s2);
    if (op == '%')
        return (s1 % s2);
    if (op == '*')
        return (s1 * s2);
    if (op == '/')
        return (s1 / s2);
    else
        return s1;
}
