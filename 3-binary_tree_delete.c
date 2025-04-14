#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: pointer to the root node of the tree to delete.
 *
 * Description: Recursively frees all nodes of a binary tree.
 * If tree is NULL, the function does nothing.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

