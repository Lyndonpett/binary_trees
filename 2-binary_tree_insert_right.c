#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child
 *
 * @parent: the parent node
 * @value: the value to set
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	node->right = NULL;
	node->left = NULL;

	if (parent->right)
	{	/* node already has right child, replace */
		node->n = parent->right->n;
		parent->right->n = value;
		parent->right->right = node;
		node->parent = parent->right;
	}
	else
	{	/* node doesnt exist, create it */
		parent->right = node;
		node->parent = parent;
		node->n = value;
	}

	return (node);
}
