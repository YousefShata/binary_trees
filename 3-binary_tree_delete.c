#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - delete binary tree
 * @tree: binary tree root
 * Return: pointer to the node or NULL if fail
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
