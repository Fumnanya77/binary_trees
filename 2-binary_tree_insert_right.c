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

	right_node->n = value;
	right_node->parent = parent;
	right_node->right = NULL;
	right_node->left = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = right_node;
	}
	else
	{
		right_node->right = parent->right;
		(right_node->right)->parent = right_node;
		parent->right = right_node;
	}

	return (right_node);
}
