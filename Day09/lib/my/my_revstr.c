/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** reverse a string
*/

void my_swap(char *a, char *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

char *my_revstr(char *str)
{
    int a = 0;
    int b = 0;

    while (str[a] != '\0'){
        a++;
    }
    a--;
    while (a != b){
        my_swap(&str[a], &str[b]);
        a--;
        b++;
    }
    return (str);
}
