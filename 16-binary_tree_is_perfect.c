#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a atree is perfect or not
 * it has to be the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none
 * @atree: atree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *atree)
{
	int left_f = 0, right_t = 0;

	if (atree->left && atree->right)
	{
		left_f = 1 + tree_is_perfect(atree->left);
		right_t = 1 + tree_is_perfect(atree->right);
		if (right_t == left_f && right_t != 0 && left_f != 0)
			return (right_t);
		return (0);
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
/**
 * binary_tree_is_perfect - perfect or not a atree
 * @atree: atree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *atree)
{
	int output = 0;

	if (atree == NULL)
	{
		return (0);
	}
	else
	{
		output = tree_is_perfect(atree);
		if (output != 0)
		{
			return (1);
		}
		return (0);
	}
}
