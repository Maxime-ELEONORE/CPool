/*
** EPITECH PROJECT, 2018
** my_concat_params
** File description:
** concat params
*/

#include <stdlib.h>
#include <stdio.h>

char *my_strcat (char *dest, char const *src)
{
    int a = 0;
    int b = 0;

    while (dest[a] != '\0'){
        a++;
    }
    while (src[b] != '\0'){
        dest[a] = src[b];
        a++;
        b++;
    }
    dest[a] = '\0';
    return (dest);
}


char *concat_params(int argc, char **argv)
{
    int i = 0;
    int a = 0;
    int b = 0;
    int size = 0;
    char *str;

    while (i < argc){
        while (argv[i][a] != '\0'){
            a++;
        }
        i++;
        size += a;
        a = 0;
    }
    str = malloc(sizeof(char) * (size + 1) + argc);
    while (b < argc){
        my_strcat(str, argv[b]);
        my_strcat(str, "\n");
        b++;
    }
    str[size + argc - 1] = '\0';
    return (str);
}
