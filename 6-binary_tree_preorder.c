#include "binary_trees.h"

/**
  * binary_tree_preorder - Checks if a node is a root
  * @node: pointer to the tree
  * @func: pointer to the functions
  * Return: 1 if true, 0 otherwise
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
