#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the tree
 *
 * Return: if null 0, otherwise the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!(tree))
	{
		return (0);
	}

	return (binary_tree_size(tree->right) + 1 + binary_tree_size(tree->left));
}
