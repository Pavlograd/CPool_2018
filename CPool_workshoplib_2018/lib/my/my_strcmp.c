/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** lib
*/

int my_strcmp(char const *s1, char const *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    if (len1 < len2 || len1 > len2) {
        return (len1 - len2);
    } else {
        return (0);
    }
}
