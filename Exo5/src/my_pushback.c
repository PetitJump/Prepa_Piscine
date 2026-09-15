#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

node_t* my_pushback(int nb, node_t *node){ // Va chercher à la fin de la liste chainée et va ajouté un noeud
    if(node == NULL)
        return my_pushfront(nb, NULL);
    
    node->next = my_pushback(nb, node->next);
    return node;
}