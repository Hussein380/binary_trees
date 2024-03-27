#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of the binary tree
 * @tree: A pointer to the root node of the tree to measure height
 * Return: if tree is NULL, your function must return 0 else height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/*if tree is not NULL(if it exist)*/
	if (tree)
	{
		/*Initialize variable to store the height of the left and right subtree*/
		size_t Left = 0, right = 0;
		/*if the left child of the current node exist,*/
		 /*calculate it height recusively and add 1 for the current node*/
		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		/*if the rigth child of the current node exist*/
		/* calculate its height recursively and add 1 for the current node*/
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/*Return the maximum height between left and right subtrees*/
		 /*plus 1 for the current node*/
		return ((left > right) ? left : right);
	}
	/*if the tree is NULL*/
	return (0);
}
