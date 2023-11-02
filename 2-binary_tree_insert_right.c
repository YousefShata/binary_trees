#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - insert to left node
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to the node or NULL if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right, *old_right;

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		old_right = parent->right;
		new_right = binary_tree_node(parent, value);
		old_right->parent = new_right;
		new_right->right = old_right;
	}
	else
	{
		new_right = binary_tree_node(parent, value);
	}
	parent->right = new_right;

	return (new_right);
}
