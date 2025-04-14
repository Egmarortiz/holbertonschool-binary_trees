#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree in pre-order.
 * @tree: pointer to the root node of the tree.
 * @func: pointer to a function called for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

