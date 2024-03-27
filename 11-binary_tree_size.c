#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to measure the size
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/*variable to store the size of the tree*/
	size_t size = 0;

	/*if the tree is not NULL*/
	if (tree)
	{
		/*increment size to count for the current node*/
		size += 1;

		/*Recursively calculate the size of the left subtree*/
		size += binary_tree_size(tree->left);

		/*Recursively calculate the size of the right subtree*/
		size += binary_tree_size(tree->right);

	}
	/*Return the total size of the tree*/
	return (size);
}
