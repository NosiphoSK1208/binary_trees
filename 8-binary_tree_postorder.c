#include "binary_trees.h"
/**
 * binary_tree_preorder - print the elements of a tree by traversing it in pre-order.
 * @atree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *atree, void (*func)(int))
{
	if (atree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(atree->left, func);
		binary_tree_postorder(atree->right, func);
	}
	func(atree->n);
}
