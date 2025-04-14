#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: pointer to the node.
 *
 * Return: pointer to the uncle node, or NULL if none.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node)
		return (NULL);
	parent = node->parent;
	if (!parent)
		return (NULL);
	grandparent = parent->parent;
	if (!grandparent)
		return (NULL);
	if (grandparent->left && grandparent->left != parent)
		return (grandparent->left);
	if (grandparent->right && grandparent->right != parent)
		return (grandparent->right);
	return (NULL);
}

