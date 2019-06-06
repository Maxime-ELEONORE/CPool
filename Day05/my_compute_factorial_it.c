/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it
** File description:
** return factorial of a number given
*/

int my_compute_factorial_it(int nb)
{
    int a = 0;
    int b = nb-1;
    
    if(nb < 0)
	return (0);
    if (nb == 0)
	return (1);
    if (nb >=13)
	return (0);
    while (b >= 1){
	a = nb*b;
	nb = a;
	b--;
    }
    return (nb);
}
