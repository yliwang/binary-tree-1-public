#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "tree.h"

void count_leaf_node(struct node *t, void *user)
{
	assert(t != NULL);

	int *p = (int *)user;
	int v = *p;
	

	if (t->left == NULL && t->right == NULL) {
		v += 1;

		*p = v;
	}
}



int get_num_leaf(struct binary_tree *tree)
{
	int num_leaf = 0;

	pre_order_traversal(tree->root,
		&num_leaf,
		count_leaf_node);

	return num_leaf;
}
