#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node
 * Return: pointer to sibling of the node. NULL if fail or no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left == node)
		{
			if (node->parent->right)
				return (node->parent->right);
			else
				return (NULL);
		}

		else if (node->parent->right == node)
		{
			if (node->parent->left)
				return (node->parent->left);
			else
				return (NULL);
		}
	}

	return (NULL);
}
