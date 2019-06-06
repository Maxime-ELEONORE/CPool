/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** swap two integers
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
    int temporaire;

    temporaire = *a;
    *a = *b;
    *b = temporaire;
}

