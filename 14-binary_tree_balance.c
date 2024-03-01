#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the balance
 * Return: the balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int left_height = binary_tree_height(tree->left);
		int right_height = binary_tree_height(tree->right);

		return (left_height - right_height);
	}
	return (0);
}
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((lef > rig) ? lef : rig);
	}
	return (0);
}
