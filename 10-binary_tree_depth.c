#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: If the tree is NULL,it retunr 0 else the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*if the tree exist and has a parent*/
	if (tree && tree->parent)
	{
		/*Recursively call binary_tree_depth on the parent node*/
		/*add 1 to account for the curent node*/
		return (1 + binary_tree_depth(tree->parent));
	}
	/*id tree is NULL return 0*/
	return (0);
}

