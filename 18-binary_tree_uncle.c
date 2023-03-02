#include "binary_trees.h"


/**
  * binary_tree_uncle - finds the sibling of a node
  * @tree: pointer to the tree
  * Return: pointer to the uncle node
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *tree)
{
	binary_tree_t *uncl, *tmp;

	if (tree == NULL || tree->parent == NULL)
	{
		return (NULL);
	}
	tmp = tree->parent;
	if (tmp->parent == NULL)
		return (NULL);
	if (tmp->n >= tmp->parent->n)
		uncl = tmp->parent->left;
	else
		uncl = tmp->parent->right;
	if (uncl == NULL)
		return (NULL);
	return (uncl);
}
