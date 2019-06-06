/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** disp a number 
*/

#include "../../include/my.h"

void my_put_nbr(int nb)
{
    int a = 0;
    int b = 0;
    int c = 10;
    while (nb != 0){
	nb/10;
	a++;
    }
    while (b != a){
	my_putchar(nb%c+48);
	c + '0';
    }
}
