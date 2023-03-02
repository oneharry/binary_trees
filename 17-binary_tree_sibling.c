#include "binary_trees.h"


/**
  * binary_tree_sibling - finds the sibling of a node
  * @tree: pointer to the tree
  * Return: pointer to the sibling node
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *tree)
{
	binary_tree_t *sib;

	if (tree == NULL || tree->parent == NULL)
	{
		return (NULL);
	}
	if (tree->n >= tree->parent->n)
		sib = tree->parent->left;
	else
		sib = tree->parent->right;
	if (sib == NULL)
		return (NULL);
	return (sib);
}
