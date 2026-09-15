#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

void my_free(node_t *list){ // Free une liste chainee entière
    node_t *copie = list;
    while(copie != NULL){
        copie = copie->next;
        free(list);
        list = copie;
    }
}