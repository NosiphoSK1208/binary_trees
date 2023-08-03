#include "binary_trees.h"
/**
 * binary_tree_preorder - print the elements of a tree by traversing it in pre-order.
 * @atree: tree to go through
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *atree, void (*func)(int))
{
	if (atree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(atree->left, func);
		func(atree->n);
		binary_tree_inorder(atree->right, func);
	}
}
