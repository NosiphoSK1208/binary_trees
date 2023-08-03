#include "binary_trees.h"
/**
 * binary_tree_nodes - function that returns # of nodes in a atree with children
 * @atree: tree to check
 * Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *atree)
{

	size_t  init_node = 0;

	if (atree == NULL)
	{
		return (0);
	}
	else
	{
		init_node += ((atree->left || atree->right) ? 1 : 0);
		init_node += binary_tree_nodes(atree->left);
		init_node += binary_tree_nodes(atree->right);
		return (init_node);
	}
}
