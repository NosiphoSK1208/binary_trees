#include "binary_trees.h"
/**
 * binary_tree_depth - depth of specified node from root
 * @atree: node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *atree)
{
	return ((atree && atree->parent) ? 1 + binary_tree_depth(atree->parent) : 0);
}
