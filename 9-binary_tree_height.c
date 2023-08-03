#include "binary_trees.h"

/**
 * binary_tree_height - method that measures the height of a binary tree
 * @atree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *atree)
{
	size_t n = 0;
	size_t k = 0;

	if (atree == NULL)
	{
		return (0);
	}
	else
	{
		if (atree)
		{
			n = atree->left ? 1 + binary_tree_height(atree->left) : 0;
			k = atree->right ? 1 + binary_tree_height(atree->right) : 0;
		}
		return ((n > k) ? n : k);
	}
}
