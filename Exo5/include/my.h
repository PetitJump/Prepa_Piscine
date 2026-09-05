#ifndef MY_H_
    #define MY_H_

typedef struct node_s{
    int values;
    struct node_s *next;
} node_t;

node_t* my_pushfront(int nb, node_t *node);
node_t* my_pushback(int nb, node_t *node);
node_t* my_delete_node(node_t node, int nb);
node_t* my_swap(node_t node, int nb);

#endif