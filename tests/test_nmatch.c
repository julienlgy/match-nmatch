/*
** EPITECH PROJECT, 2018
** CPool_match-nmatch_2018
** File description:
** testing nmatch
*/

#include <criterion/criterion.h>

Test(nmatch, test_abcbd)
{
    int result = nmatch("abcbd", "*b*");

    cr_assert_eq(result, 2);
}

Test(nmatch, test_abc)
{
    int result = nmatch("abc", "a**");

    cr_assert_eq(result, 3);
}
