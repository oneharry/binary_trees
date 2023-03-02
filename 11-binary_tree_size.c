#include "binary_trees.h"

/**
  * binary_tree_size - calculate dept of a node
  * @tree: pointer to the tree
  * Return: size of tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lh = 0, rh = 0;

	if (tree)
	{
		lh = (binary_tree_size(tree->left));
		rh = (binary_tree_size(tree->right));
		return ((lh + rh) + 1);

	}
	return (0);
}
