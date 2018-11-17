/*
** EPITECH PROJECT, 2018
** my_strstr
** File description:
** lib
*/

char *my_strstr(char *str, char const *to_find)
{
    int temp = 0;

    while (str[temp] != '\0') {
        for (temp = 0; to_find[temp] != '\0'; temp++) {
            if (str[temp] != to_find[temp])
                return (my_strstr(str + 1, to_find));
        }
        return (str);
    }
    return (0);
}
