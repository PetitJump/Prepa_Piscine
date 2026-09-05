#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

node_t* my_delete_node(int nb, node_t *node){
    if(node->next->values == nb){
        node->next = node->next->next;
        return node;
    } 
    else
        node->next = my_delete_node(nb, node->next);
    return node;
}