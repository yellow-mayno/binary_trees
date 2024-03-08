#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - is the node a leaf or not
 * @node: the node
 * Return: 0 if not, leaf 1 if leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
