#include "binary_trees.h"

/**
  * countNodes - count the nodes
  * @root: pointer to tree
  * Return: number of noode
  */

int countNodes(binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + countNodes(root->left) + countNodes(root->right));
}


/**
  * binary_tree_is_complete - checks a binary tree os complete
  * @tree: pointer to the node
  * Return: 1 if complete, 0 otherwise
  */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = countNodes(tree->left);
	rh = countNodes(tree->right);
	if (lh == rh && binary_tree_is_complete(tree->left) &&
		binary_tree_is_complete(tree->right))
		return (1);
	return (0);
}
