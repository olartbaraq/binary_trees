#include "binary_trees.h"
#include <stdlib.h>


/**
 * create_binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer to be stored in the node
 *
 * Return: Pointer to the new node
 */

binary_tree_t *create_binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL || parent == NULL)
return (NULL);
new_node->parent = parent;
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
return (new_node);
}



/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: Pointer to the parent node
 * @value: Integer to be stored in the node
 *
 * Description: If parent already has a left-child, the new node must take its
 * place, and the old left-child must be set as the left-child of the new node.
 *
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *child_left;

if (parent == NULL)
return (0);
child_left = create_binary_tree_node(parent, value);
if (child_left == NULL)
return (0);
child_left->left = parent->left;
if (parent->left != NULL)
parent->left->parent = child_left;
parent->left = child_left;
return (child_left);
}
