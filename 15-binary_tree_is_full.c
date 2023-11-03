#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_is_full - check the tree balance
 * @tree: tree root
 * Return: the height of the tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	
	return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
}
