#include "binary_trees.h"


/**
  * binary_tree_levelorder - levelorder traversal
  * @tree: pointer to the node
  * @func: pointer to functio
  * Return: void
  */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree == NULL)
			return;
		func(tree->n);
		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);
	}
}
