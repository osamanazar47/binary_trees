#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node ina binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: the depth of the node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
