/*
** EPITECH PROJECT, 2018
** my_list_size
** File description:
** 
*/

#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    int i = 0;

    while (begin != NULL){
	begin = begin->next;
	i++;
    }
    return (i);
}
