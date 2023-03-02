#include "binary_trees.h"

/**
  * binary_tree_nodes - count the nodes with at least 1 child
  * @tree: pointer to the tree
  * Return: number of nodes with >= 1 child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lh = 0;

	if (tree)
	{
		if (tree == NULL)
			return (0);
		if (tree->left || tree->right)
			lh += 1;
		lh += (binary_tree_nodes(tree->left));
		lh += (binary_tree_nodes(tree->right));
		return (lh);

	}
	return (lh);
}
