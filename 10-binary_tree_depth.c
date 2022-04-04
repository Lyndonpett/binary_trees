#include "binary_trees.h"

/**
 * binary_tree_dept - finds the depth of a binary tree
 * @tree: the tree
 *
 * Return: if null 0, otherwise the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t treeHeight;

	if ((!(tree)) || (!(tree->parent)))
	{
		return (0);
	}

	treeHeight = binary_tree_depth(tree->parent);

	return (treeHeight + 1);
}
