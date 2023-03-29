#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the given node is the root
 *
 * @node: the node to be checked
 *
 * Return: 1 -yes or 0 - no;
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int return_value;

	if (node == NULL)
		(return_value = 0);

	if (node->parent == NULL)
		(return_value = 1);
	else
		(return_value = 0);

	return (return_value);
}
