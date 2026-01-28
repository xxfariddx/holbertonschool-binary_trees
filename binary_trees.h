#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* creates a parent node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* inserts a new node as a left child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* inserts a new node as a right child of another node */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* frees the whole binary tree */
void binary_tree_delete(binary_tree_t *tree);
/* checks if the node is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);
/* checks if the node is root */
int binary_tree_is_root(const binary_tree_t *node);
/* prints binary tree in preorder traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* prints binary tree in-order traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* prints post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

#endif
