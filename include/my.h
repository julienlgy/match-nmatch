/*
** EPITECH PROJECT, 2018
** CPool_Day09_2018
** File description:
** header of the library lib/my/libmy.a
*/

#ifndef MY_H_
#define MY_H_
/**/
int my_putchar(char);
/**/
int my_isneg(int);
/**/
int check_inf_zero(int);
int get_length_number(int);
int get_char_on_position(int *, int);
int do_pow(int, int);
int my_put_nbr(int);
/**/
void my_swap(int *, int *);
/**/
int my_putstr(char const *);
/**/
int check_broken_int(int *, int*);
int increment_int(int *, int *, int, int*);
int my_getnbr(char const *);
/**/
int my_strlen(char const *);
/**/
void sort_array(int, int, int *, int *);
void my_sort_int_array(int *, int);
/**/
int check_overflow(int, int);
int my_compute_power_rec(int, int);
/**/
int my_compute_square_root(int);
/**/
int my_is_prime(int);
/**/
int my_find_prime_sup(int);
/**/
char *my_strcpy(char *, char const *);
/**/
char *my_strncpy(char *, char const *);
/**/
int str_length(int *);
char *my_revstr(char *);
/**/
char *my_strstr(char *, char const *);
/**/
int my_strcmp(char const *, char const *);
/**/
int my_strncmp(char const *, char const *, int);
/**/
char *my_strupcase(char *);
/**/
char *my_strlowcase(char *);
/**/
void set_to_lowercase(char *);
void set_to_uppercase(char *);
int is_char(char);
int check_before(char);
char *my_strcapitalize(char *);
/**/
int my_str_isalpha(char const *);
/**/
int my_str_isnum(char const *str);
/**/
int my_str_islower(char const *);
/**/
int my_str_isupper(char const *);
/**/
int my_str_isprintable(char const *);
/**/
int my_showstr(char const *);
/**/
int my_showmem(char const *, int);
/**/
char *my_strcat(char *, char const *);
/**/
char *my_strncat(char *, char const *, int);
/**/
int my_show_word_array(char * const *);
/**/
int test_is_alphan(char *);
int calc_a_a_length(char const *);
int add_str_to_arr(char *, int*, int, char *);
int calc_array_length(char const *, int);
char **my_str_to_word_array(char const *);
/**/
char *my_strdup(char const*);
#endif
