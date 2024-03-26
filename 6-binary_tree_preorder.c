#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse a binary tree using pre-order
 * @tree: A pointer to the root of the tree to traverse
 * @func: A pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*if the tree is not NULL */
	if (tree && func)
	{
		/*call the function func with the value of the current node*/
		func(tree->n);

		/*Recursively traverse the left subtree*/
		binary_tree_preorder(tree->left, func);
		/*Recursively traverse the right subtree*/
		binary_tree_preorder(tree->right, func);
	}
}

