#include "binary_trees.h"
/**
 * binary_tree_delete - Recursively free an entire init_tree by releasing each node. 
 * The node will be freed when both its left and right children are NULL.
 * @init_tree: tree to free
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *init_tree)
{
	if (init_tree == NULL)
	{
		return;
	}
	else
	{
		if (init_tree != NULL)
		{
			binary_tree_delete(init_tree->left);
			binary_tree_delete(init_tree->right);
		}
		free(init_tree);
	}

}
