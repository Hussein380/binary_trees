#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a tree postorder trave
 * @tree: pointer to the root of the tree to traverse
 * @func: pointer to a function to call for each node.
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*if tree and func is not NULL*/
	if (tree && func)
	{
		/*traverse the left subtree*/
		binary_tree_postorder(tree->left, func);
		/*traverse the right side of te tree*/
		binary_tree_postorder(tree->right, func);

		/*call the func*/
		func(tree->n)
	}

}
