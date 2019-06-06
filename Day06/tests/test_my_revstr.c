/*
** EPITECH PROJECT, 2018
** test_my_revstr
** File description:
** testing revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *);

Test(my_revstr, return_value_is_reversed)
{
    char str[6] = "Hello";

    cr_assert_str_eq(my_revstr(str), "olleH");
}

char *my_revstr(char *);

Test(my_revstr, return_value_is_reversed2)
{
    char stri[2] = "a";

    cr_assert_str_eq(my_revstr(stri), "a");
}
