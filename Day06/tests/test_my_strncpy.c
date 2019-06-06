#include <criterion/criterion.h>

Test(my_strncpy, copy_five_character_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy (dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copy_three_character_in_empty_array)
{
    char desti[3] = {0};

    my_strncpy (desti, "HelloWorld", 3);
    cr_assert_str_eq(desti, "Hel");
}

Test(my_strncpy, copy_zero_character_in_empty_array)
{
    char destin[6] = {0};

    my_strncpy (destin, "HelloWorld", 0);
    cr_assert_str_eq(destin, "");
}

