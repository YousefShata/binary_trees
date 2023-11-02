#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_preorder - go throught tree using preorder
 * @tree: binary tree root
 * @func: function to be passed
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
