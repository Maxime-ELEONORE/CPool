/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** mystrdup
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    int a = 0;
    int b = 0;
    char *str;

    while (src[a] != '\0'){
        a++;
    }
    str = malloc(sizeof(char) * (a + 1));
    while (src[b] != '\0'){
        str[b] = src[b];
        b++;
    }
    str[b] = '\0';
    return (str);
}
