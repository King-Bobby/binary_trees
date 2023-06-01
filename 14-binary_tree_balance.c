#include "binary_trees.h"

/**
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0, balance = 0;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	balance = l_height - r_height;
	return (balance);
}
