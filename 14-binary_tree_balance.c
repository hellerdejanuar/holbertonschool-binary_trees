#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes downstream w/ at least one child
 * @tree: tree
 * Return: 0 if tree is NULL, <node count> on success
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		nodes = binary_tree_nodes(tree->left);
	if (tree->right)
		nodes += binary_tree_nodes(tree->right);


	return (nodes + 1);
}
