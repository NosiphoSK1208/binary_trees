#include "binary_trees.h"

/**
 * binary_tree_sibling - method that finds if a init_node is sibling
 * @init_node: node to check
 * Return: The sibling init_node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *init_node)
{
	if (init_node == NULL || init_node->parent == NULL)
	{
		return (NULL);
	}
	if (init_node->parent->left == init_node)
		return (init_node->parent->right);
	return (init_node->parent->left);
}
