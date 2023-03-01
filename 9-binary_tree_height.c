#include "binary_trees.h"

/**
  * binary_tree_height - calculate height of binary tree
  * @tree: pointer to the tree
  * Return: void
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

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
