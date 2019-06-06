/*
** EPITECH PROJECT, 2018
** my_compute_power_it
** File description:
** give a number up to the power p
*/

int my_compute_power_it(int nb, int p)
{
    int a;

    if (p == 0)
	return (1);
    if (p < 0)
	return (0);
    while (p >= 1){
	a = nb*nb;
	p--;
    }
    return (a);
}
