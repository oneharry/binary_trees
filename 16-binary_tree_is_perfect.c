#include "binary_trees.h"


/**
  * binary_tree_is_perfect - checks if a node is full
  * @tree: pointer to the tree
  * Return: number of nodes with >= 1 child
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree == NULL)
			return (0);
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return ((binary_tree_is_full(tree->left) &&
					(binary_tree_is_full(tree->left))) &&
				(binary_tree_height(tree->left) ==
				 binary_tree_height(tree->right)));
	}
	return (0);
}

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
