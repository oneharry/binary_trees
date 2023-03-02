#include "binary_trees.h"


/**
  * binary_trees_ancestor - finds the common ancestors of 2 nodes
  * @first: pointer to the first node
  * @second: pointer to the second node
  * Return: pointer to the common ancestor node
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *pa1, *pa2;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	pa1 = first->parent;
	pa2 = second->parent;
	if (first == pa2 || !pa1 || (!pa1->parent && pa2))
		return (binary_trees_ancestor(first, pa2));
	else if (second == pa1 || !pa2 || (!pa2->parent && pa1))
		return (binary_trees_ancestor(pa1, second));
	return (binary_trees_ancestor(pa1, pa2));
}
