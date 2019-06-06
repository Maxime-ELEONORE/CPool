

/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** print tout les combinaison de 3 digit
*/

#include <unistd.h>

int my_print(int a, int b, int c)
{
    if (a == 7 && b == 8 && c == 9 && (a < b && b < c)){
	my_putchar(a+48);
	my_putchar(b+48);
	my_putchar(c+48);
	my_putchar('\n');
    }
    else if (a < b && b < c){
        my_putchar(a+48);
        my_putchar(b+48);
        my_putchar(c+48);
        my_putchar(',');
        my_putchar(' ');
	}


}

int my_print_comb(void)
{
    int a = 0;
    int b = 1;
    int c = 2;

    while (a <= '9'){
	while (b <= '9'){
	    while (c <= 9){
		my_print(a,b,c);
		c++;
	    }
	    c = 0;
	    b++;
	}
	b = 0;
	a++;
    }
    return (0);
}

