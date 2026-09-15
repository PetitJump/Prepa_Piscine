#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

node_t* my_swap(int nb1, int nb2, node_t *node){
    if(node == NULL)
        return NULL;

    if(node->values == nb1)
        node->values = nb2;

    else{
        if(node->values == nb2)
        node->values = nb1;
    }
    node->next = my_swap(nb1, nb2, node->next);
    return node;  
}