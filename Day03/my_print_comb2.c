/*
** EPITECH PROJECT, 2018
** my_print_comb2
** File description:
** my print comb 2
*/

#include <unistd.h>

int my_digit()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    while (a <= 9 && b <= 9 && c <= 9 && d <= 9){
	my_print(a, b, c, d);
	if (b == 9 && c == 9 && d == 9){
	    a++;
	    b = 0;
	    c = 0;
	    d = 0;
	}
	if (c == 9 && d == 9){
	    b++;
	    c=0;
	    d=0;
	}
	if (d==9){
	    c++;
	    d=0;
	}
	d++;
    }
}

int my_printer(int a, int b, int c, int d)
{
    if(a <= c && b < d && a == 9 && b == 8 && c == 9 && d == 9){
    my_putchar(a+48);
    my_putchar(b+48);
    my_putchar(' ');
    my_putchar(c+48);
    my_putchar(d+48);
    }
    else if (a <= c && b < d){
    my_putchar(a+48);
    my_putchar(b+48);
    my_putchar(' ');
    my_putchar(c+48);
    my_putchar(d+48);
    my_putchar(',');
    my_putchar(' ');
    }
}
