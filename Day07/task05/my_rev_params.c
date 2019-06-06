/*
** EPITECH PROJECT, 2018
** my_rev_params
** File description:
** revers argument
*/

void my_putchaaar(char c)
{
    write(1, &c, 1);
}

int my_putstrrr(char const *str)
{
    int a = 0;

    while (str[a] != '\0'){
        my_putchaaar(str[a]);
        a++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int a = argc - 1;

    while (a >= 0){
        my_putstrrr(argv[a]);
        my_putchaaar('\n');
        a--;
    }
}
