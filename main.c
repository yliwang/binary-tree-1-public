#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#include "tree.h"

int get_num_leaf(struct binary_tree *tree);

void main()
{
	struct binary_tree t;
	init_binary_tree(&t);

	t.root = create_node('d');

	t.root->left = create_node('b');

	t.root->left->left = create_node('m');
	t.root->left->right = create_node('k');

	t.root->left->right->left = create_node('p');
	t.root->left->right->right = create_node('t');

	t.root->right = create_node('c');

	t.root->right->left = create_node('a');

	t.root->right->left->right = create_node('g');

	t.root->right->right = create_node('f');
	t.root->right->right->right = create_node('h');

	//pre_order_traversal( t.root, NULL, print_node );

	//printf("num nodes: %d\n", size(t.root));
	//printf( "height=%d\n", height( t.root ) );
	//printf("new height=%d\n", new_height(t.root));
	int num_leaf = get_num_leaf(&t);

	printf("num leaf=%d\n", num_leaf);


	uninit_binary_tree(&t);
}


#if 0
/*
tree:
a
/ \
b   c
\
d
*/
void main()
{
	struct binary_tree t;
	init_binary_tree(&t);

	t.root = build_tree('a', build_tree('b', empty_tree(), build_tree('d', empty_tree(), empty_tree())), build_tree('c', empty_tree(), empty_tree()));

	//destroy_tree( t.root );
	uninit_binary_tree(&t);

	/* another version */
	t.root = create_node('a');
	t.root->left = create_node('b');
	t.root->left->right = create_node('d');
	t.root->right = create_node('c');

	//destroy_tree( t.root );
	uninit_binary_tree(&t);
}
#endif