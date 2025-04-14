#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height (number of edges) of the tree, or 0 if tree is NULL
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
 * binary_tree_balance - computes the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance factor (left height minus right height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (!tree)
		return (0);
	left_h = tree->left ? binary_tree_height(tree->left) : 0;
	right_h = tree->right ? binary_tree_height(tree->right) : 0;
	return (left_h - right_h);
}

