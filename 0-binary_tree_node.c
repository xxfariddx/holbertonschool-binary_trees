#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    parent = malloc(sizeof(binary_tree_t));
    
    if (parent == NULL)
        return (NULL);

    parent->n = value;
    parent->right = NULL;
    parent->left == NULL;

    return (parent);
}