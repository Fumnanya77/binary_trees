#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if the node is leaf
 *
 * @node - pointer to the node
 *
 * Return: Return 1 or 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int return_value;

	if (node == NULL)
		(return_value = 0);

	if (node->left == NULL && node->right == NULL)
		(return_value = 1);
	else
		(return_value = 0);

	return (return_value);
}
