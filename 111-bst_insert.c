#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a BST
 * @tree: the tree
 * @value: value to be inserted
 * Return: a pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
	{
		return (NULL);
	}
	/* if address is empty, insert node there */
	if (*tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	} /* go left side of bst */
	if (value < (*tree)->n)
	{	/* if address is empty, insert, otherwise run bst_insert again */
		if ((*tree)->left == NULL)
		{
			(*tree)-> left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		return (bst_insert(&((*tree)->left), value));
	} /* same as above, just reverse for other side */
	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		return (bst_insert(&((*tree)->right), value));
	}
	return (NULL);
}
