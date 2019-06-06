/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** This function return string
*/

#include "../../include/my.h"

void my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
