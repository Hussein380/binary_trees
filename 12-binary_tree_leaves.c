#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: if tree is NULL, return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*Initialize variable to store the number of leaves*/
	size_t leaves = 0;

	/*if the tree exist*/
	if (tree)
	{
		/*if the current node has left child or right child,*/
	       /*it is a child*/
		leaves += (!tree->left && !tree->right) ? 1 : 0;


		/*Recursively count the leaves on the left subtree*/
		leaves += binary_tree_leaves(tree->left);

		/*Recursively coun the leaves on the right subtree*/
		leaves += binary_tree_leaves(tree->right);
	}
	/*Return the total number of leaves*/
	return (leaves);
}
