/*
** EPITECH PROJECT, 2018
** strlen
** File description:
** count characters of a string
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int a = 0;
    
    while (str[a] != '\0'){
	a++;
    }
    return (a);
}

