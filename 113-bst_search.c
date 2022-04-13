#include "binary_trees.h"

/**
 * bst_search - searches a BST
 * @tree: the tree
 * @value: value to search
 *
 * Return: pointer to the found value or NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{	/* if null or value = value, return tree */
	if (tree == NULL || tree->n == value)
	{
		return ((bst_t *)tree);
	}
	/* recursively search left */
	if (value < tree->n)
	{
		return (bst_search(tree->left, value));
	}
	/* vice versa here */
	if (value > tree->n)
	{
		return (bst_search(tree->right, value));
	}

	return (NULL);
}
