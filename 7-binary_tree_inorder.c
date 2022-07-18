#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: tree
 * @func: ptr to a function to apply to all the nodes in in-order sequence
 * args (tree->n)
 * Return: NULL if failure, pointer to new_node on Success
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);

	func(tree->n);
}
