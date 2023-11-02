#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: a node
 * Return: 1 if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
