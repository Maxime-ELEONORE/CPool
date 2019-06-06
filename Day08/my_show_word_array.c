/*
** EPITECH PROJECT, 2018
** my_show_word_array
** File description:
** show array word
*/

#include <stddef.h>

int my_show_word_array(char * const *tab)
{
    int a = 0;

    while (tab[a] != NULL){
        my_putstr(tab[a]);
        a++;
    }
    return (0);
}
