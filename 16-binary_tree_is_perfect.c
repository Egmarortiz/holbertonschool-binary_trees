#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root of the tree.
 *
 * Return: Height (number of edges) of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	return (left > right ? left : right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root of the tree.
 *
 * Return: 1 if tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);
	/* Leaf node is perfect */
	if (!tree->left && !tree->right)
		return (1);
	/* If one child is missing, tree is not perfect */
	if (!tree->left || !tree->right)
		return (0);
	/* Compute heights of left and right subtrees */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	/* Tree is perfect if both subtrees are perfect and have equal height */
	if (left_h != right_h)
		return (0);
	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}

