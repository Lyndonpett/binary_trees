#include "binary_trees.h"

/**
 * findADepth - finds depth of a binary tree
 * @tree: the tree
 *
 * Return: depth of node
 */
int findADepth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = (tree->left);
	}

	return (d);
}

/**
 * isPerfectRec - recursively tests if a binary tree is perfect... checks that
 * all leaves are at same level and all internal nodes have two children
 *
 * @tree: the tree
 * @depth: depth of tree
 * @level: level of tree
 *
 * Return: 1 if perfect, 0 otherwise
 */

int isPerfectRec(const binary_tree_t *tree, int depth, int level)
{
	int left, right;

	/* an empty tree is perfect */
	if (!(tree))
	{
		return (1);
	}

	/* if leaf, its depth must be same as all other leaves depth */
	if ((!(tree->left)) && (!(tree->right)))
	{
		return (depth == (level + 1));
	}

	/* if internal node and one child is empty */
	if ((!(tree->left)) || (!(tree->right)))
	{
		return (0);
	}

	/* Left and right subtrees must be perfect */
	left = isPerfectRec(tree->left, depth, level + 1);
	right = isPerfectRec(tree->right, depth, level + 1);

	return (left && right);
}


/**
 * binary_tree_is_perfect - measures if a binary tree is perfect
 * @tree: the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (!(tree))
	{
		return (0);
	}

	depth = findADepth(tree);

	return (isPerfectRec(tree, depth, 0));
}
