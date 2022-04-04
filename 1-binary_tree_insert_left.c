#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child
 *
 * @parent: the parent node
 * @value: the value to set
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!(parent))
	{
		return (NULL);
	}

	node = malloc(sizeof(binary_tree_t));

	if (!(node))
	{
		return (NULL);
	}

	node->left = NULL;
	node->right = NULL;

	if (parent->left)
	{	/* node already has left child, replace */
		node->n = parent->left->n;
		parent->left->n = value;
		parent->left->left = node;
		node->parent = parent->left;
	}
	else
	{	/* node doesnt exist, create it */
		parent->left = node;
		node->parent = parent;
		node->n = value;
	}

	return (node);
}
