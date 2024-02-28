#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_node - creates a node
 * @parent: the parent of this node
 * @value: the value of this node
 * Return: a pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	struct binary_tree_s *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;
	return (new_node);
}
