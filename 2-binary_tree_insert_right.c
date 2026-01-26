#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
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
		node->parent = parent;
		node->right = NULL;
		parent->right = node;
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
