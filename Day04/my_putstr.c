/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** disp a string
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    int a = 0;

    while(str[a] != '\0'){
	my_putchar(str[a]);
	a++;
    }
    return (0);
}

