#include "binary_trees.h"
#include <limits.h>
/**
  * is_bst - checks if a node is a bst
  * @node: pointer to the node
  * @min: minimum value
  * @max: maximum value
  * Return: 1 if a bst, 0 otherwise
  */
int is_bst(const binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return (1);

	if (node->n < min || node->n > max)
		return (0);

	return (is_bst(node->left, min, node->n - 1) &&
		is_bst(node->right, node->n + 1, max));
}

/**
  * binary_tree_is_bst - Checks if a binary tree is valid BST
  * @tree: pointer to the node
  * Return: 1 if valid, 0 otherwiae
  */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_bst(tree, INT_MIN, INT_MAX));
}
