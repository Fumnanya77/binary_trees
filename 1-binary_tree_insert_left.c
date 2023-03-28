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
	binary_tree_t *left_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	temp_node = parent;
	
	if (temp_node == NULL)
		return (NULL);
	

<<<<<<< HEAD
	new_node = temp_node->left;
	left_node->parent = temp_node;
	left_node->n = value;
	left_node->left = new_node;
	temp_node->left = left_node;
=======
	parent->right = NULL;

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		left_node = parent->left;
		left_node->parent = parent;
		left_node->n = value;
		left_node->right = NULL;

	}
	else
	{
		left_node->parent = parent;
		left_node->n = value;
		left_node->right = NULL;
	}
>>>>>>> ff4c2a745670ce78c875037a470c136677d01fda

	return (left_node);
}
