#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert the right node of a binary tree
 *
 * @parent: The parent node of the node
 * @value: The value of the node
 *
 * Return: The pointer to the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	temp = parent;
	
	if (temp == NULL)
		return (NULL);
	
	new_node = temp->right;
	right_node->parent = temp;
	right_node->n = value;
	right_node->right = new_node;
	temp->right = right_node;

	return (right_node);
}
