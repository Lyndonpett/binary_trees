#include "binary_trees.h"

/**
 * is_bst - checks if a binary tree is a BST
 * @tree: the tree
 * @min: min int
 * @max: max int
 *
 * Return: 1 if true, 0 otherwise
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
	{
		return (1);
	}

	/* check if value is less than min or larger than max */
	if (tree->n <= min || tree->n >= max)
	{
		return (0);
	}

	/* recursively check siblings */
	return ((is_bst(tree->left, min, tree->n)) &&
		(is_bst(tree->right, tree->n, max)));
}



/**
 * binary_tree_is_bst - checks if a binary tree is a BST
 * @tree: the tree
 *
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (is_bst(tree, INT_MIN, INT_MAX));
}
