#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_balance - check the tree balance
 * @tree: tree root
 * Return: the height of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_len, right_len, diff;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_len = 1 + binary_tree_balance(tree->left);
	else
		left_len = 0;
	if (tree->right)
		right_len = 1 + binary_tree_balance(tree->right);
	else
		right_len = 0;
	diff = left_len - right_len;
	return (diff);
}
