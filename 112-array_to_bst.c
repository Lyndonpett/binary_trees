#include "binary_trees.h"

/**
 * array_to_bst - creates bst from array
 * @array: the array
 * @size: number of array
 *
 * Return: pointer to the root node of the created BST or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *node = NULL;
	size_t index = 0;

	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	/* run bst insert through each array index */
	while (index < size)
	{
		bst_insert(&node, array[index]);
		index++;
	}
	return (node);
}
