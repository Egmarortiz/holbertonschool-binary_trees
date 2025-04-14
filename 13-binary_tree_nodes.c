#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child in a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: number of nodes with at least 1 child, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		return (1 + left_count + right_count);
	return (0);
}

