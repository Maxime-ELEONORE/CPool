/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** copy a piece of a string into an other
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    
    while (i <= n - 1){
	dest[i] = src[i];
	i++;
    }
    dest[i] = '\0';
    return (dest);
}
