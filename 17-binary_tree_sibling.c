#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_sibling - check the tree sibilings
 * @node: a node
 * Return: pointer to the sibiling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->left);

	return (node->parent->right);
}
