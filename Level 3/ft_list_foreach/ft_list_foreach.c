#include "ft_list.h"
//#include <stdio.h>
//#include <stdlib.h>

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

/*

void print_data(void *data)
{
    printf("%s\n", (char *)data);
}

int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->data = "First element";
    node1->next = node2;

    node2->data = "Second element";
    node2->next = node3;

    node3->data = "Third element";
    node3->next = NULL;

    ft_list_foreach(node1, print_data);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}

*/