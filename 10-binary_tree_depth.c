#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_depth - check the tree depth
 * @tree: tree root
 * Return: the height of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	 int depth = 0;

	 if (tree == NULL)
		 return (depth);

	 while (tree->parent)
	 {
		depth++;
		tree = tree->parent;
	 }
	 return (depth);
}
