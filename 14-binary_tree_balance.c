#include "binary_trees.h"

/**
 * binary_tree_heightV2 - measures the height of a binary tree
 * @tree: the tree
 *
 * Return: 0 if null, otherwise the height
 */

size_t binary_tree_heightV2(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if ((!(tree)) || ((!(tree->left)) && (!(tree->right))))
	{
		return (0);
	}

	leftHeight = binary_tree_heightV2(tree->left);
	rightHeight = binary_tree_heightV2(tree->right);

	if (leftHeight > rightHeight)
	{
		return (leftHeight + 1);
	}
	else
	{
		return (rightHeight + 1);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree
 *
 * Return: if null 0, otherwise the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int rightHeight, leftHeight;

	if (!(tree))
	{
		return (0);
	}

	if (!(tree->right))
	{
		rightHeight = 0;
	}

	else
	{
		rightHeight = binary_tree_heightV2(tree->right);
	}

	if (!(tree->left))
	{
		leftHeight = 0;
	}

	else
	{
		leftHeight = binary_tree_heightV2(tree->left);
	}

	return (leftHeight - rightHeight);
}
