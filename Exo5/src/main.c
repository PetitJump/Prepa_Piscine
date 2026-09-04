#include <stdio.h>
#include "../include/my.h"

void afficher(node_t *list){ // Affiche une list chaine
    while(list != NULL){
        printf("%i ", list->values);
        list = list->next;
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
    afficher(list);
    return 0;  
}