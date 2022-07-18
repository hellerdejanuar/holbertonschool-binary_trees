#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @parent: parent of the node to create
 * @value: value
 * Return: NULL if failure, pointer to new_node on Success
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    if (tree->left != NULL)
        binary_tree_delete(tree->left);

    if (tree->right != NULL)
        binary_tree_delete(tree->right);

free(tree);
return;
}