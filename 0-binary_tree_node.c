#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: the parent node
 * @value: the value for the new node
 *
 * Return: returns a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* allocate for new node */
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!(node))
	{
		return (NULL);
	}
	/* assign data to this node */
	node->n = value;

	/* initialize left and right children as null */
	node->left = NULL;
	node->right = NULL;

	/* check for parent, set parent, otherwise null */
	if (!(parent))
	{
		node->parent = NULL;
	}

	else
	{
		node->parent = parent;
	}

	return(node);
}
