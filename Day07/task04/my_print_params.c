/*
** EPITECH PROJECT, 2018
** my_print_params
** File description:
** print params
*/

void my_putchaar(char c)
{
    write(1, &c, 1);
}

int my_putstrr(char const *str)
{
    int a = 0;

    while (str[a] != '\0'){
        my_putchaar(str[a]);
        a++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i = 0;

    while (i < argc){
        my_putstrr(argv[i]);
        my_putchaar('\n');
        i++;
    }
}
