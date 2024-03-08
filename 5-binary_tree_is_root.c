#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if node is root or not
 * @node: the node to check
 * Return: 1 is root and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
