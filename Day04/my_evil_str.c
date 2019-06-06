/*
** EPITECH PROJECT, 2018
** my_evil_str
** File description:
** inverse characters
*/

#include <unistd.h>

void my_swapper(char *a, char *b)
{
    int temporaire;

    temporaire = *a;
    *a = *b;
    *b = temporaire;
}
char* my_evil_str(char *str)
{
    int a = 0;
    int b = 0;

    while (str[a] != '\0'){
        a++;
    }
    a--;
    while (a >  b){
	my_swapper(&str[a], &str[b]);
	a--;
	b++;
    }
    return (str);
}

