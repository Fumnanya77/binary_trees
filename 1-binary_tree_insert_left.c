#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert the left node of a binary tree
 *
 * @parent: The parent node of the node
 * @value: The value of the node
 *
 * Return: The pointer to the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	left_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->parent = parent;
	left_node->left = NULL;
	left_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = left_node;
	}
	else
	{
		left_node->left = parent->left;
		(left_node->left)->parent = left_node;
		parent->left = left_node;
	}

	return (left_node);
}
