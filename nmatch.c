/*
** EPITECH PROJECT, 2018
** CPool_match-nmatch_2018
** File description:
** nmatch - count number of times s2 match with s1
*/

#include "include/matchnmatch.h"

int nmatching_char(char const *s1, char const *s2)
{
    if (*s1 == *s2)
        return (nmachine_match(s1 + 1, s2 + 1));
    return (0);
}

int nmatching_asterix(char const *s1, char const *s2)
{
    if (*s1 != '\0' && *s1 != *s2 + 1) {
        return (nmatching_asterix(s1 + 1, s2) + nmachine_match(s1, s2 + 1));
    } else if (*s1 == '\0' && *s2 == '*') {
        return (nmachine_match(s1, s2 + 1));
    }
}

int nmachine_match(char const *s1, char const *s2)
{
    if (*s2 == '*') {
        return (nmatching_asterix(s1, s2));
    } else {
        if (*s1 == '\0' && *s2 == '\0')
            return (1);
        else
            return (nmatching_char(s1, s2));
    }
}

int nmatch(char const *s1, char const *s2)
{
    int nb_result;

    nb_result = nmachine_match(s1, s2);
    return (nb_result);
}
