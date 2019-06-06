/*
** EPITECH PROJECT, 2018
** my_isneg
** File description:
** neg or pos maxime eleonore
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n >= 0)
	my_putchar('P');
    else
	my_putchar('N');
    return(0);
}
