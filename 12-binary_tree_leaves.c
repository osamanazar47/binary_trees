#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in abinary tree
 * @tree: a pointer to the root node of the tree
 * Return: the number of leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			n += 1;
		n += binary_tree_leaves(tree->left);
		n += binary_tree_leaves(tree->right);
	}
	return (n);
}
