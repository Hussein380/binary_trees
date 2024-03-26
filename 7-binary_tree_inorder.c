#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a tree in_order traversal
 * @tree: pointer to the root of the tree to traverse
 * @func: pointer to a function to call for each node.
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*if tree and func is not NULL*/
	if (tree && func)
	{
		/*traverse the left subtree*/
		binary_tree_inorder(tree->left, func);

		/*call  the function func with value of the current node*/
		func(tree->n);
		/*traverse the right side of te tree*/
		binary_tree_inorder(tree->right, func);
	}

}
