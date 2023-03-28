#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert the left node of a binary tree
 *
 * @parent: The parent node of the node
 * @value: The value of the node
 *
 * Return: The pointer to the node
 */

binary_tree_t binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *left = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return NULL;

	node->parent = parent;
	node->n = value;

	if (node->left) == NULL
		node->left = left;
	else
		node->left = left;

	return node;
}
