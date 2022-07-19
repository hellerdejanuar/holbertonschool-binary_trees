#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes downstream w/ at least one child
 * @tree: tree
 * Return: 0 if tree is NULL, <node count> on success
 */

int binary_tree_is_leaf(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	if (!(tree->left) && !(tree->right))
		return (1);
	else
		return (0);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (is_perfect_recursion(tree) != -1)
		return (1);
	else
		return (0);
}

/**
 * is_perfect_recursion - auxiliary fuction to recursively check the
 * depth of all the leaves and compare between them
 * @tree: tree
 * Return: -1 if depth of left and right are different
 * othewise returns the depth of the leave.
 */
int is_perfect_recursion(const binary_tree_t *tree)
{
	int depth_l = 0, depth_r = 0;

	if (!tree)
		return (0);

	if (!binary_tree_is_leaf(tree))
	{
		depth_l = is_perfect_recursion(tree->left);
		depth_r = is_perfect_recursion(tree->right);
	}
	else
		return (binary_tree_depth(tree));

	if (depth_l != depth_r)
		return (-1);
	else
		return (depth_l);
}

