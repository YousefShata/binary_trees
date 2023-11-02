#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert to left node
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to the node or NULL if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left, *old_left;

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		old_left = parent->left;
		new_left = binary_tree_node(parent, value);
		old_left->parent = new_left;
		new_left->left = old_left;
	}
	else
	{
		new_left = binary_tree_node(parent, value);
	}
	parent->left = new_left;

	return (new_left);
}
