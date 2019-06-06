/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** same thing but rec
*/

int my_compute_power_rec(int nb, int power)
{
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    else
        return (nb*my_compute_power_rec(nb, power-1));
}
