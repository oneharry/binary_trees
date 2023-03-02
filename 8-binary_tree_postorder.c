#include "binary_trees.h"

/**
  * binary_tree_postorder - traverse post-order
  * @tree: pointer to the tree
  * @func: pointer to the functions
  * Return: void
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree == NULL)
			return;
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
