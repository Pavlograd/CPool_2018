/*
** EPITECH PROJECT, 2018
** test_match
** File description:
** project02
*/

#include <criterion/criterion.h>

int rush3(char *str);

Test(rush3, rush1_1_one_one)
{
    char str[] = "o";

    cr_assert(rush3(str), "[rush1-1] 1 1\n");
}

Test(rush3, rush1_2_two_two)
{
    char str[] = "/\\/"

    cr_assert(rush3(str), "[rush1-2] 2 2\n");
}

Test(rush3, rush1_4_one_one)
{
    cr_assert(rush3(str), "[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
}

Test(rush3, rush1_5_five_one)
{
    cr_assert(rush3(str), "[rush1-3] 5 1 || [rush1-4] 5 1 || [rush1-5] 5 1\n");
}

Test(rush3, rush1_3_one_five)
{
    cr_assert(rush3(str), "[rush1-3] 1 5 || [rush1-4] 1 5 || [rush1-5] 1 5\n");
}
