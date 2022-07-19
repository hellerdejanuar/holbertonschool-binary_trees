#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if tree is leaf
 * @tree: tree
 * Return: -1 if tree = NULL, 0 if not a leaf, 1 if leaf
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

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: tree
 * Return: 1 if perfect, 0 if not or FAIL
 */
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
 * Return: if a leaf is found returns its <depth>
 * all non leaf nodes will just compare and pass the value
 * if values differ return -1
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

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the tree node
 * Return: If tree is NULL return is 0
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
