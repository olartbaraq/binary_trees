#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if node is a leaf node
 * @node: node to check
 *
 * Return: 0 if not a leaf or node is NULL, 1 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL)
return (0);
if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: root of tree to measure
 *
 * Return: integer height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL || binary_tree_is_leaf(tree))
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left >= right)
return (1 + left);
return (1 + right);
}

/**
 * binary_tree_balance - compute balance factor for a binary tree
 * @tree: root of tree to measure balance factor of
 *
 * Return: integer balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;
if (tree == NULL)
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (left - right);
}
