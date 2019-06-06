/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** concatenate 2str
*/

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
