#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the tree node
 * Return: If tree is NULL return is 0
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t temp = 0;

	binary_tree_t *node;

	if (tree == NULL)
		return (0);
	node = (binary_tree_t *)tree;

	while (node->parent)
	{
		temp++;
		node = node->parent;
	}
	return (temp);
}
