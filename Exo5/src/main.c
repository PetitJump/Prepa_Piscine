#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

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
    my_free(list);
    return 0;  
}