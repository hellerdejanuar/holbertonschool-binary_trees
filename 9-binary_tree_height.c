#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to te tree node
 * Return: Address of thenew element or NULL if it failed
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1, height2;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	{
		height1 = binary_tree_height(tree->left) + 1;
		height2 = binary_tree_height(tree->right) + 1;
	}

	if (height1 > height2)
		return (height1);
	else
		return (height2);
}

