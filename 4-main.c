#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 10);
	binary_tree_insert_left(root, 3);
	binary_tree_insert_left(root, 2);
	binary_tree_insert_left(root, 11);
	binary_tree_insert_right(root->left, 20);
	binary_tree_insert_right(root->left, 30);
	binary_tree_print(root);
	printf("%d\n", binary_tree_is_leaf(root->left->right->right));
	printf("%d\n", binary_tree_is_leaf(root));
	return (0);
}
