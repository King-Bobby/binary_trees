#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is complete on all levels
 * @tree: pointer to the root of tree to check
 * Return: 1 if perfect and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, h;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	h = (1 << height) - 1;
	return (size == h);
}

/**
 * binary_tree_size - measures the size of the binary tree
 * @tree: pointer to root node
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: height amount
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r_height, l_height;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_height(tree->left) + 1;
	r_height = binary_tree_height(tree->right) + 1;

	if (l_height > r_height)
		return (l_height);
	else
		return (r_height);
}
