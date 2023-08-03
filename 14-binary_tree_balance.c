#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary atree for a bal atree
 * @atree: atree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *atree)
{
	size_t n = 0;
	size_t s = 0;

	if (atree == NULL)
	{
		return (0);
	}
	else
	{
		if (atree)
		{
			n = atree->left ? 1 + binary_tree_height_b(atree->left) : 1;
			s = atree->right ? 1 + binary_tree_height_b(atree->right) : 1;
		}
		return ((n > s) ? n : s);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary atree
 * @atree: atree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *atree)
{
	int right_s = 0, left_s = 0, sm = 0;

	if (atree)
	{
		left_s = ((int)binary_tree_height_b(atree->left));
		right_s = ((int)binary_tree_height_b(atree->right));
		sm = left_s - right_s;
	}
	return (sm);
}
