#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

void display(node_t *list){ // Affiche une list chaine
    node_t *copie = list;
    while(copie != NULL){
        printf("%i ", copie->values);
        copie = copie->next;
    }
}

int main(void){
    node_t *list = NULL;
    list = my_pushback(1, list);
    list = my_pushback(2, list);
    list = my_pushfront(0, list);
    list = my_pushback(3, list);
    list = my_pushfront(-1, list);
    list = my_pushback(4, list);
    list = my_delete_node(3, list);
    list = my_swap(-1, 4, list);
    display(list);
    return 0;  
}