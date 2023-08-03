#include "binary_trees.h"
/**
 * binary_tree_size - method that return the amount of a tree
 * @atree: tree to check
 * Return: size of atree
 */
size_t binary_tree_size(const binary_tree_t *atree)
{
	size_t amount = 0, k = 0, n = 0;

	if (atree == NULL)
	{
		return (0);
	}
	else
	{
		n = binary_tree_size(atree->left);
		k = binary_tree_size(atree->right);
		amount = k + n + 1;
	}
	return (amount);
}
