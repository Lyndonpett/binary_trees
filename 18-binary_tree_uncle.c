#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of the given node
 * @node: the node
 *
 * Return: uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (!(node))
	{
		return (NULL);
	}

	if (node->parent)
	{
		tmp = node->parent;

		if (tmp->parent)
		{
			if ((tmp->parent->left) && (tmp->parent->left->n == tmp->n))
			{
				if (tmp->parent->right)
				{
					return (tmp->parent->right);
				}
			}
			if ((tmp->parent->right) && (tmp->parent->right->n == tmp->n))
			{
				if (tmp->parent->left)
				{
					return (tmp->parent->left);
				}
			}
		}
	}
	return (NULL);
}
