/*
** EPITECH PROJECT, 2018
** CPool_CPool_match-nmatch_2018
** File description:
** match - find out if two strings match
*/

#include "include/matchnmatch.h"

int matching_char(char const *c1, char const *c2, int *incs1, int *incs2)
{
    if (*c1 == *c2) {
        *incs1 += 1;
        *incs2 += 1;
        return (1);
    }
    return (0);
}

int matching_asterix(char const *s1, char const *c2, int *incs1)
{
    while (s1[*incs1] != '\0' && s1[*incs1] != *c2) {
        *incs1 += 1;
    }
    return (1);
}

int machine_match(char const *s1, char const *s2, int *incs1, int *incs2)
{
    if (s2[*incs1] == '*') {
        *incs2 += 1;
        return (matching_asterix(s1, &s2[*incs2], incs1));
    } else {
        return (matching_char(&s1[*incs1], &s2[*incs2], incs1, incs2));
    }
}

int match(char const *s1, char const *s2)
{
    int incs1 = 0;
    int incs2 = 0;

    while (s1[incs1] != '\0' || s2[incs2] != '\0') {
        if (!machine_match(s1, s2, &incs1, &incs2)) {
            return (0);
        }
    }
    return (1);
}
