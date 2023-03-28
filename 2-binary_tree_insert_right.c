#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert the left node of a binary tree
 *
 * @parent: The parent node of the node
 * @value: The value of the node
 *
 * Return: The pointer to the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	parent->left = NULL;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		right_node = parent->right;
		right_node->parent = parent;
		right_node->n = value;
		right_node->left = NULL;

	}
	else
	{
		right_node->parent = parent;
		right_node->n = value;
		right_node->left = NULL;
	}

	return (right_node);
}
