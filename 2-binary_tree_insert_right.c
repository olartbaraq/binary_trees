#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer to be stored in the node
 *
 * Return: Pointer to the new node
 */

binary_tree_t *create_binary_tree_node_1(binary_tree_t *parent, int value)
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



/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 * @parent: Pointer to the parent node
 * @value: Integer to be stored in the node
 *
 * Description: If parent already has a right-child, the new node must take its
 * place, and the old right-child must be set as the
 * right-child of the new node.
 *
 * Return: Pointer to the new node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *child_right;

if (parent == NULL)
return (0);
child_right = create_binary_tree_node_1(parent, value);
if (child_right == NULL)
return (0);
child_right->right = parent->right;
if (parent->right != NULL)
parent->right->parent = child_right;
parent->right = child_right;
return (child_right);
}
