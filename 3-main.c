#include "binary_trees.h"
#include <stdlib.h>

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
	/*
	binary_tree_delete(root); this one should cause a seg err if b-t-print
	binary_tree_delete(root->left->right);
	binary_tree_delete(root->left->left);
	*/
	binary_tree_delete(root);
	/*binary_tree_print(root);*/

	return (0);
}
