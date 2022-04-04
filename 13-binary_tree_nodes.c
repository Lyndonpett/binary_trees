#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: the tree
 *
 * Return: if null 0, otherwise count of nodes w/o leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if ((!(tree)) || ((!(tree->left)) && (!(tree->right))))
	{
		return (0);
	}

	return (binary_tree_nodes(tree->right) + 1 + binary_tree_nodes(tree->left));
}
