#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves
 * @tree: tree
 * Return: 0 if tree is NULL, <leaves count> on success
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		leaves = binary_tree_leaves(tree->left);
	if (tree->right)
		leaves += binary_tree_leaves(tree->right);


	return (leaves);
}
