#include "binary_trees.h"


/**
  * binary_tree_is_full - checks if a node is full
  * @tree: pointer to the tree
  * Return: number of nodes with >= 1 child
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree == NULL)
			return (0);
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}
