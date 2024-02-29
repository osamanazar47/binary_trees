#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in abinary tree
 * @tree: a pointer to the root node of the tree
 * Return: the number of nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL || tree->right != NULL)
			n += 1;
		n += binary_tree_nodes(tree->left);
		n += binary_tree_nodes(tree->right);
	}
	return (n);
}
