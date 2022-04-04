#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves on a binary tree
 * @tree: the tree
 *
 * Return: if null 0, otherwise number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!(tree))
	{
		return (0);
	}

	else if ((!(tree->left)) && (!(tree->right)))
	{
		return (1);
	}

	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
