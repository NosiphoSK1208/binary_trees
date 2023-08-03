#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node to the left of its parent. If the parent 
 * already has a left child, the new node will be placed one level below 
 * the existing left child, becoming the new left child.
 * @parent: Rephrase the a parent node of the specified node.
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *init_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	init_node = binary_tree_node(parent, value);
	if (init_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		init_node->left = parent->left;
		parent->left->parent = init_node;
	}
	parent->left = init_node;
	return (init_node);
}
