#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node
 *
 * Return: pointer to sibling or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (!(node))
	{
		return (NULL);
	}

	if (node->parent)
	{
		tmp = node->parent;
		/* parent node has a left child, and the values match given node */
		if ((tmp->left) && (tmp->left->n == node->n))
		{	/* since we know there's a parent, we can get the right sibling */
			if (tmp->right)
			{
				return (tmp->right);
			}
		}
		/* same as above, but vice versa */
		if ((tmp->right) && (tmp->right->n == node->n))
		{
			if (tmp->left)
			{
				return (tmp->left);
			}
		}
	}
	return (NULL);
}
