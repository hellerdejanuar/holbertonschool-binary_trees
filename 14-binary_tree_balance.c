#include "binary_trees.h"

/**
 * binary_tree_balance - return the balance factor of the tre
 * @tree: pointer to te tree node
 * Return: Positive int if tree balanced left, negative if right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_h = binary_tree_height(tree->left);
	if (tree->right)
		right_h = binary_tree_height(tree->right);

	return (left_h - right_h);
}


#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to te tree node
 * Return: Address of thenew element or NULL if it failed
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1 = 0, height2 = 0;

	if (!tree)
		return (0);

	height1 = binary_tree_height(tree->left) + 1;
	height2 = binary_tree_height(tree->right) + 1;

	if (height1 > height2)
		return (height1);
	else
		return (height2);
}

