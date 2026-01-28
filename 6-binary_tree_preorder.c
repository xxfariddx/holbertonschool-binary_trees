#include "binary_trees.h"
#include <stdio.h>

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    func(node->n);

    binary_tree_preorder(node->left, func);
    binary_tree_preorder(node->right, func);
}