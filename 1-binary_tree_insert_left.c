#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *temp;
    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    if (parent == NULL)
    {
        free(temp);
        free(node);
        return (NULL);
    }

    if (node == NULL)
        return (NULL);

    node->n = value;
    node->right = NULL;

    if (parent->left == NULL) 
    {
        node->parent = parent;
        parent->left = node;
        node->left = NULL;
    }
    else
    {
        temp = parent->left;
        parent->left = node;
        node->parent = parent;
        node->left = temp;
        temp->parent = node;
    }

    return (node);
}