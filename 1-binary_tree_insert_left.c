#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent of the node to create
 * @value: value
 * Return: NULL if failure, pointer to new_node on Success
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* assign value to node */
	new_node->n = value;

	/* set old left as left child of new_node */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/* set new_node->parent to parent*/
	new_node->parent = parent;

	/* set parent to point to new_node*/
	parent->left = new_node;

	return (new_node);
}
