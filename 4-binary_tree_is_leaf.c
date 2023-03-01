#include "binary_trees.h"

/**
  * binary_tree_is_leaf - Checks if a node is a leaf
  * @node: pointer to the tree
  * Return: 1 if true, 0 otherwise
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->left || node->right)
		return (0);
	return (1);
}
