/*
** EPITECH PROJECT, 2018
** my_compute_factorial_rec
** File description:
** return th factorial of an int with recursive
*/

int my_compute_factorial_rec(int nb)
{
    int a;
    
    if (nb < 0 || nb >= 13)
	return (0);
    if (nb == 0)
	return (1);
    a = nb*my_compute_factorial_rec(nb-1);
    return(a);
}
