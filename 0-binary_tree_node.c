#include "binary_trees.h"

/**
 * binary_tree_node - To create a binary tree node
 *
 * @parent: The parent of the node
 * @value: The value in the node
 *
 * Return: Returns a pointer to the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;

	return (node);
}
