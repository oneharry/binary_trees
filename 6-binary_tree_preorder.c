#include "binary_trees.h"

/**
  * binary_tree_preorder - traverse pre-order
  * @tree: pointer to the tree
  * @func: pointer to the functions
  * Return: void
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree == NULL)
			return;
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
