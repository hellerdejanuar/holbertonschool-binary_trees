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
		left_h = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_h = binary_tree_height(tree->right) + 1;
	return (left_h - right_h);
}


#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to te tree node
 * Return: height number, 0 if failed
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	height_l = binary_tree_height(tree->left);
	if (tree->left)
		height_l++;

	height_r = binary_tree_height(tree->right);
	if (tree->right)
		height_r++;

	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}

