#include "binary_trees.h"

/**
  * binary_tree_balance - count the nodes with at least 1 child
  * @tree: pointer to the tree
  * Return: number of nodes with >= 1 child
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree)
	{
		if (tree == NULL)
			return (0);
		if (tree->left)
			lh += 1;
		if (tree->right)
			rh += 1;
		lh += (binary_tree_balance(tree->left));
		rh += (binary_tree_balance(tree->right));
		return (lh - rh);
	}
	return (lh);
}
