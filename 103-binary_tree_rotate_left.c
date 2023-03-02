#include "binary_trees.h"


/**
  * binary_tree_rotate_left - rotate binary tree to the left
  * @tree: pointer to the node
  * Return: pointer to the new root node
  */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	int lh, rh;
	if (tree == NULL)
		return (0);
	lh = binary_tree_depth(tree->left);
	rh = binary_tree_depth(tree->right);
	return (lh == rh && binary_tree_is_complete(tree->left) &&
			binary_tree_is_complete(tree->right));

}

/**
  * binary_tree_depth - calculate dept of a node
  * @tree: pointer to the tree
  * Return: void
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (binary_tree_depth(tree->parent) + 1);
	}
	return (0);
}
