#include "binary_trees.h"

/**
 * binary_tree_uncle - method that finds if a nd is sibling
 * @nd: node to check
 * Return: The uncle nd
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *nd)
{
	if (nd == NULL || nd->parent == NULL || nd->parent->parent == NULL)
	{
		return (NULL);
	}
	if (nd->parent->parent->left == nd->parent)
		return (nd->parent->parent->right);
	return (nd->parent->parent->left);
}
