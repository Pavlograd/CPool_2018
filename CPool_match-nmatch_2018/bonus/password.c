/*
** EPITECH PROJECT, 2018
** password
** File description:
** match nmatch bonus
*/

int match(char const *s1, char const *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);
    int temp = 0;

    if (len1 < len2) {
        write(1, "Your password is too long\n", 26);
        return (0);
    } else if (len1 > len2) {
        write(1, "Your password is too short\n", 27);
        return (0);
    } else {
        for (temp = 0; s1[temp] != '\0'; temp++) {
            if (s1[temp] != s2[temp]) {
                write(1, "Your password is incorrect\n", 27);
                return (0);
            }
        }
        write(1, "Bravo\n", 6);
        return (1);
    }
}

int main(int argc, char **argv)
{
    char password[] = "Hello";

    if (argc == 2) {
        match(password, argv[1]);
    } else {
        write(1, "No password\n", 12);
    }
}
