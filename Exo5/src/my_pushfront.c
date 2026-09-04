#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

node_t* my_pushfront(int nb, node_t *node){
    node_t *new_node = malloc(sizeof(node_t));
    new_node->values = nb;
    new_node->next = node;
    return new_node;
}