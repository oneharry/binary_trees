#include "binary_trees.h"


/**
  * binary_tree_balance - count the nodes with at least 1 child
  * @tree: pointer to the tree
  * Return: number of nodes with >= 1 child
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal = 0;

	if (tree)
	{
		return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
	}
	return (bal);
}

/**
  * binary_tree_height - calculate height of binary tree
  * @tree: pointer to the tree
  * Return: void
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 1, rh = 1;

	if (tree)
	{
		if (tree->left)
			lh = binary_tree_height(tree->left) + 1;
		if (tree->right)
			rh = binary_tree_height(tree->right) + 1;
		if (lh > rh)
			return (lh);
		else
			return (rh);
	}
	return (0);
}
