#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - insert value in left of parent and displace the
 * original one in case it exist.
 * @parent: pointer of the parent node
 * @value: an integer
 * Return: pointer to the inserted left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;
	parent->left = new_node;
	if (new_node->left != NULL)
		new_node->left->parent = new_node;
	puts("done");
	return (new_node);
}
