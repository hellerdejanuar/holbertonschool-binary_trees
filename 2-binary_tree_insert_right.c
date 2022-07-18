#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: parent of the node to create
 * @value: value
 * Return: NULL if failure, pointer to new_node on Success
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	/* assign value to node */
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/* set old right as right child of new_node */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* set new_node->parent to parent*/
	new_node->parent = parent;

	/* set parent to point to new_node*/
	parent->right = new_node;

	return (new_node);
}
