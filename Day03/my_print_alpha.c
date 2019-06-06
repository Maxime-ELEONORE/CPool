/*
** EPITECH PROJECT, 2018
** my_print_alpha
** File description:
** print alpha
*/

#include <unistd.h>

int my_print_alpha(void)
{
    int letter;

    letter = 97;
    while (letter <= 122) {
        my_putchar(letter);
	letter ++;
	}
    return(0);
}
