/*
** EPITECH PROJECT, 2018
** CPool_match-nmatch_2018
** File description:
** testing match
*/

#include <criterion/criterion.h>

Test(match, test_zero)
{
    int result = match("bonjour", "salut");

    cr_assert_eq(result, 0);
}

Test(match, test_one)
{
    int result = match("bonjour", "bonjour");

    cr_assert_eq(result, 1);
}

Test(match, test_asterix)
{
    int result = match("salut", "s*t");

    cr_assert_eq(result, 1);
}
