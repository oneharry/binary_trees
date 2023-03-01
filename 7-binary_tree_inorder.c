#include "binary_trees.h"

/**
  * binary_tree_inorder - traverse in-order
  * @tree: pointer to the tree
  * @func: pointer to the functions
  * Return: void
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree == NULL)
			return;
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
