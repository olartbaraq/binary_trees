#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traverse of binary tree
 * @tree: starting point of traversal
 * @func: function to call on the value at each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_inorder(tree->left, func);
binary_tree_inorder(tree->right, func);
func(tree->n);
}
