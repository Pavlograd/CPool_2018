/*
** EPITECH PROJECT, 2018
** test_infin_add
** File description:
** infin_add
*/

#include <criterion/criterion.h>

int conditions(char *first, char *second);

Test(conditions, one_plus_one)
{
    char s1[] = "1";
    char s2[] = "1";

    conditions(s1, s2);
    cr_assert(conditions(s1, s2), "2");
}

Test(conditions, same_size_add)
{
    char s1[] = "145454444";
    char s2[] = "199898888";

    conditions(s1, s2);
    cr_assert(conditions(s1, s2), "345353332");
}

Test(conditions, same_size_sub)
{
    char s1[] = "-7778877771";
    char s2[] = "-9889888981";

    conditions(s1, s2);
    cr_assert(conditions(s1, s2), "-17668766752");
}

Test(conditions, zero_before)
{
    char s1[] = "00016";
    char s2[] = "0001445";

    conditions(s1, s2);
    cr_assert(conditions(s1, s2), "1461");
}
