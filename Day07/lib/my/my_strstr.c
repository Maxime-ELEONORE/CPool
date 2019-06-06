/*
** EPITECH PROJECT, 2018
** my_strstr
** File description:
** find a word into a str
*/
#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int a = 0;
    int b = 0;
    int c = 0;

    while (to_find[c] != '\0'){
        c++;
    }
    while (str[a] != '\0'){
        while (str[a+b] == to_find[b]) {
            if (to_find[b] == '\0')
                return (&str[a]);
            b++;
        }
        if (b == c)
            return (&str[a]);
        else
            b = 0;
        a++;
    }
    return (NULL);
}
