#include "binary_trees.h"

/**
  * binary_tree_leaves - calculate number of leaves
  * @tree: pointer to the tree
  * Return: size of tree
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lh = 0;

	if (tree)
	{
		if (tree == NULL)
			return (0);
		if (tree->left == NULL && tree->right == NULL)
			lh += 1;
		lh += (binary_tree_leaves(tree->left));
		lh += (binary_tree_leaves(tree->right));
		return (lh);

	}
	return (lh);
}
