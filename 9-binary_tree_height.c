#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - check the tree height
 * @tree: tree root
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_len, left_len;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_len = 1 + binary_tree_height(tree->left);
	else
		left_len = 0;
	if (tree->right)
		right_len = 1 + binary_tree_height(tree->right);
	else
		right_len = 0;

	if (left_len > right_len)
		return (left_len);
	else
		return (right_len);
}
