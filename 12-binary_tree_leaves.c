#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: counts the leaves in a binary tree
 * Return: number of leaves of a node in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	num = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (num);
}
