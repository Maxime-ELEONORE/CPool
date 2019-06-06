/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** same thing but jusqua n
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;

    while (dest[a] != '\0'){
        a++;
    }
    while (src[b] != src[nb]){
        dest[a] = src[b];
        a++;
        b++;
    }
    dest[a] = '\0';
    return (dest);
}
