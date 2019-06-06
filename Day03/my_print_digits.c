/*
** EPITECH PROJECT, 2018
** my_print_digit
** File description:
** print digit maxime eleonore
*/

#include <unistd.h>
int my_print_digits(void)
{
    int digit = 48;

    while (digit <= 57){
	my_putchar(digit);
        digit++;
    }
    return(0);
}
