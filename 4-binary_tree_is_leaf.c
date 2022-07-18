#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that deletes an entire binary tree
 * @node: node
 * Return: NULL if failure, pointer to new_node on Success
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
