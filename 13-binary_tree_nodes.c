#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with atleast 1 child in binary tree
 * @tree: pointer to the rot node of the tree
 * Return: if tree is NULL 0, else node count
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*Initialize variable to store the  number of nodes*/
	size_t nodes = 0;

	/*if tree exists*/
	if (tree)
	{
		/*if current node has atleast one child, it is nonleaf*/
		nodes += (tree->left || tree->right) ? 1 : 0;

		/*Recursively count the node in left subtree*/
		nodes += binary_tree_nodes(tree->left);

		/*Recursively count the nodes in the right subtree*/
		nodes += binary_tree_nodes(tree->right);
	}
	/*Return the total number of nodes*/
	return (nodes);
}
