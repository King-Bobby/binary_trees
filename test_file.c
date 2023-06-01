#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *findSibling(binary_tree_t *root, binary_tree_t *node);

// Function to find the sibling of a node
binary_tree_t *findSibling(binary_tree_t *root, binary_tree_t *node) {
    if (root == NULL || root == node)
        return NULL;

    // Check if the node is the left child of its parent
    if (root->left == node)
        return root->right;

    // Check if the node is the right child of its parent
    if (root->right == node)
        return root->left;

    // Recursively search for the sibling in the left and right subtrees
    binary_tree_t *sibling = findSibling(root->left, node);
    if (sibling == NULL)
        sibling = findSibling(root->right, node);

    return sibling;
}
