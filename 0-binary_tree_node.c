#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer to be stored in the node
 *
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (0);
else
{
new_node->parent = parent;
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
return (new_node);
}
}
