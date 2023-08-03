#include "binary_trees.h"

/**
 * binary_tree_is_root - method that checks if a node is a root
 * @init_node: node to check
 * Return: 0 if is not a root 1 if it is
 */

int binary_tree_is_root(const binary_tree_t *init_node)
{
	if (init_node == NULL || init_node->parent != NULL)
		return (0);
	return (1);
}
