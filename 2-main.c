#include "binary_trees.h"
#include <stdlib.h>

int main(void)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (root == NULL)
		return 123;
	root = binary_tree_node(root, 1);
	binary_tree_insert_left(root, 10);
	binary_tree_insert_right(root->left, 30);
	binary_tree_insert_right(root->left, 20);
	binary_tree_insert_right(root, 3);
	binary_tree_insert_right(root, 2);
	binary_tree_print(root);
	return (0);
}
