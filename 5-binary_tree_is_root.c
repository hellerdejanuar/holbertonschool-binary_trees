#include "binary_trees.h"
/**
 * binary_tree_is_root - function that deletes an entire binary tree
 * @node: a pointer to the node to check
 * Return: NULL if failure, pointer to new_node on Success
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
		return (0);

	return (1);
}
