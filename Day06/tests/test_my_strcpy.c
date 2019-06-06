*
** EPITECH PROJECT, 2018
** test my_strcpy
** File description:
** test my_strcpy
*/

#include <criterion/criterion.h>

char *my_strcpy(char *, const char *);

Test(my_strcpy, copy_string_in_empty_array)
{
    char dest[6] = {0};

    my_strcpy(dest, "Hello");
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strcpy, copy_string_in_empty_array2)
{
    char desti[2] = {0};

    my_strcpy(desti, "a");
    cr_assert_str_eq(desti, "a");
}

Test(my_strcpy, copy_string_in_empty_array3)
{
    char destin[1] = {0};

    my_strcpy(destin, "");
    cr_assert_str_eq(destin, "");
}

