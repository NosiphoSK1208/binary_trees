#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a atree
 * @atree: atree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *atree)
{
	size_t lzf = 0, left = 0, right = 0;

	if (atree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(atree->left);
		right = binary_tree_leaves(atree->right);
		lzf = left + right;
		return ((!left && !right) ? lzf + 1 : lzf + 0);
	}
}
