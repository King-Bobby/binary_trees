#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of tree to check
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0, balance = 0;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	printf("l-height is %d and r-height is %d\n", l_height, r_height);
	balance = (l_height - r_height);
	return (balance);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height = 0, l_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		r_height = binary_tree_height(tree->right) + 1;
	if (r_height > l_height)
		return (r_height);
	else
		return (l_height);
}
