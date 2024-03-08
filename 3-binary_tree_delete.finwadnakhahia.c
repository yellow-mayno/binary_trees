#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - delete all the tree by giving a root
 * @tree: deleting anything from this point
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t **arr;
	int num = 0;

	if (tree == NULL)
		return;
	arr = malloc(sizeof(binary_tree_t *));
	arr[0] = tree;	
	num++;
	while (num != 0)
	{
		actual = 
		if (tree->left != NULL)
		{
			arr = realloc(arr, num + 1);
			arr[num] = tree->left;
		}
		if (tree->right != NULL)
		{	
			arr = realloc(arr, num + 1);
			arr[num] = tree->right;	
		}

