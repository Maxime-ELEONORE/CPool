/*
** EPITECH PROJECT, 2018
** my_params_to_list
** File description:
** list the parmas
*/

#include <stdlib.h>
#include "include/mylist.h"
#include "include/my.h"

linked_list_t *my_put_in_list(linked_list_t *mylist, char *arg)
{
    linked_list_t *new = malloc(sizeof(linked_list_t));
    new->data = arg;
    new->next = mylist;
    return new;
}

int my_show_list(linked_list_t *mylist)
{
    linked_list_t *tmp = mylist;
    
    while (tmp != NULL){
        my_putstr(tmp -> data);
        tmp = tmp -> next;
    }
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int a = 0;
    linked_list_t *list = NULL;
    
    while (a < ac){
        list = my_put_in_list(list, av[a]);
        a++;
    }
    return (list);
}

int my_list_size(linked_list_t const *begin)
{
    int i = 0;

    while(begin != NULL){
        begin = begin->next;
        i++;
    }
    return (i);
}
