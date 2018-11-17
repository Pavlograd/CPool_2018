/*
** EPITECH PROJECT, 2018
** test_match
** File description:
** project02
*/

#include <criterion/criterion.h>

int match(char const *s1, char const *s2);

Test(match, match_same_size_no_asterisks)
{
    char s1[] = "Hello";
    char s2[] = "Hello";

    cr_assert(match(s1, s2), "the strings are not the same");
}

Test(match, no_match_same_size_no_asterisks)
{
    char s1[] = "Hello";
    char s2[] = "Hallo";

    cr_assert(match(s1, s2), "The strings are not the same");
}

Test(match, no_match_len2_low_len1_size_no_asterisks)
{
    char s1[] = "Hello";
    char s2[] = "Hell";

    cr_assert(match(s1, s2), "The strings are not the same");
}

Test(match, no_match_len2_sup_len1_no_asterisks)
{
    char s1[] = "Hello";
    char s2[] = "Helloo";

    cr_assert(match(s1, s2), "The strings are not the same");
}

Test(match, match_same_size_asterisks)
{
    char s1[] = "Hello";
    char s2[] = "H*llo";

    cr_assert(match(s1, s2), "The strings are identical");
}

Test(match, match_len2_sup_len1_asterisks)
{
    char s1[] = "Hello";
    char s2[] = "H**ll**";

    cr_assert(match(s1, s2), "The strings are identical");
}

Test(match, no_match_len2_sup_len1_asterisks)
{
    char s1[] = "Hello";
    char s2[] = "H**l***b";

    cr_assert(match(s1, s2), "The strings are not the same");
}

Test(match, match_len2_sup_len1_asterisks_2)
{
    char s1[] = "Hello";
    char s2[] = "H**l***l**o";

    cr_assert(match(s1, s2), "The strings are identical");
}



