#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete all the rest of the binary tree starting from
 * the given node by a recurssive function and set to NULL the ptr of node in
 * parent.
 * @node: node from where everything should be deleted
 * Return: void
 */
void binary_tree_delete(binary_tree_t *node)
{
	if (node == NULL)
		return;
	binary_tree_delete(node->left);
	binary_tree_delete(node->right);
	if (node->parent != NULL)
		if (node->parent->left == node)
			node->parent->left = NULL;
		else
			node->parent->right = NULL;
	free(node);
}
