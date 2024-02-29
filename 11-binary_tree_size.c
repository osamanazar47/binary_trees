#include "binary_trees.h"
/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: the size of the tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree != NULL)
	{
		n += 1;
		n += binary_tree_size(tree->left);
		n += binary_tree_size(tree->right);
	}
	return (n);
}
