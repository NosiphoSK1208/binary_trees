#include "binary_trees.h"

/**
 * binary_tree_node - initiate a binary node
 * @parent: Node of a parent
 * @value: Value of the node
 * Return: the initieted node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *init_node;

	init_node = malloc(sizeof(binary_tree_t));
	if (init_node == NULL)
	{
		return (NULL);
	}
	init_node->n = value;
	init_node->parent = parent;
	init_node->left = NULL;
	init_node->right = NULL;
	return (init_node);
}
