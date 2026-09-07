#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

void display(node_t *list){ // Affiche une list chainee
    node_t *copie = list;
    while(copie != NULL){
        printf("%i ", copie->values);
        copie = copie->next;
    }
}