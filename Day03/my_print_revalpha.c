/*
** EPITECH PROJECT, 2018
** my_print_revalpha
** File description:
** revalpha maxime eleonore
*/

#include <unistd.h>

int my_print_revalpha(void)
{
    int letter = 122;
    
    while (letter >= 97) {
	my_putchar(letter);
	letter--;
    }
    return(0);
}
