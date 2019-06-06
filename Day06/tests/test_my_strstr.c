/*
** EPITECH PROJECT, 2018
** test my_strstr
** File description:
** tesestrstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);


Test(my_strstr, find_to_find_in_str)
{
    char str[] = "blalolblab";
    char to_find[] = "lol";

    cr_assert_str_eq(my_strstr(str, to_find), "lolblab");
}

Test(my_strstr, find_to_find_in_str2)
{
    char str2[] = "lolblablab";
    char to_find2[] = "lol";

    cr_assert_str_eq(my_strstr(str2, to_find2), "lolblablab");
}

Test(my_strstr, find_to_find_in_str3)
{
    char str3[] = "blablablol";
    char to_find3[] = "lol";

    cr_assert_str_eq(my_strstr(str3, to_find3), "lol");
}




