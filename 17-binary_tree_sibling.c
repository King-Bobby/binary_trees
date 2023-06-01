#include "binary_trees.h"

binary_tree_t *findSibling(binary_tree_t *root, binary_tree_t *node);
/**
 * binary_tree_sibling - find the sibling of a node
 * @node: pointer to node, which we are to find its sibling
 * Return: NULL if no sibling or return value of the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp, *twin;

	temp = node;
	while (temp->parent != NULL)
	{
		temp = temp->parent;
	}

	twin = findSibling(temp, node);
	return (twin);
}

/**
 * findSibling - recursively finds the sibling using the root
 * @root: root of the tree
 * @node: node we want to find its sibling
 * Return: the sibling
 */
binary_tree_t *findSibling(binary_tree_t *root, binary_tree_t *node)
{
	if (root == NULL || root == node)
		return (NULL);

	/* Check if the node is the left child of its parent*/
	if (root->left == node)
		return (root->right);

	/* Check if the node is the right child of its parent */
	if (root->right == node)
		return (root->left);

	/* Recursively search for the sibling in the left and right subtrees */
	binary_tree_t *sibling = findSibling(root->left, node);

	if (sibling == NULL)
		sibling = findSibling(root->right, node);

	return (sibling);
}
