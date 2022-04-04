#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: the node
 *
 * Return: 1 if leaf, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node))
	{
		return (0);
	}
	else if (!(node->left) && !(node->right))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
