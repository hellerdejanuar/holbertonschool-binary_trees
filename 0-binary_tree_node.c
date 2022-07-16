#include "binary_trees.h"
/**
 * binary_tree_node - creates a leaf node in a binary tree
 * @parent: parent of the node to create
 * @value: value
 * Return: NULL if failure, pointer to new_node on Success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
