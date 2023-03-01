#include "binary_trees.h"

/**
  * binary_tree_insert_left - Inserts a node as the left-child of another node
  * @parent: pointer to the node to insert the left-child in
  * @value: Value to put in the new node
  * Return: returns pointer to the new node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left)
	{
		temp = parent->left;
		parent->left->parent = new;
		new->left = temp;
	}
	parent->left = new;
	return (new);
}
