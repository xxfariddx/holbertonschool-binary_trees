#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *temp;
    binary_tree_t *node;

    if (parent == NULL)
        return (NULL);

    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return (NULL);

    node->n = value;
    node->left = NULL;

    if (parent->right == NULL) 
    {
        parent->right = node;
        node->parent = parent;
        node->right = NULL;
    }
    else
    {
        temp = parent->right;
        parent->right = node;
        node->parent = parent;
        node->right = temp;
        temp->parent = node;
    }

    return (node);
}