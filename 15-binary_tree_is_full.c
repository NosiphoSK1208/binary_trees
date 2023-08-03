#include "binary_trees.h"
/**
 * binary_tree_is_full - method that says if a atree is full or not
 * a atree is full if it has tow or none children
 * @atree: atree to check
 * Return: 1 if it is a full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *atree)
{
	int left_s = 0, right_s = 0;

	if (atree == NULL)
	{
		return (0);
	}
	else
	{
		if (atree->left && atree->right)
		{
			left_s = binary_tree_is_full(atree->left);
			right_s = binary_tree_is_full(atree->right);
			if (left_s == 0 || right_s == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!atree->left && !atree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
