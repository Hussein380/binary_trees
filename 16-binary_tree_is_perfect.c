#include "binary_trees.h"

/**
 * is_leaf - Checks if a node is a leaf of a binary tree
 * @node: A pointer to the node to check
 *
 * Return: if the node is a leaf, 1, otherwise 0
 *
 *
 */


unsigned char is_leaf(const binary_tree_t *node)
{
	/*If both lef and right children of the node are NULL, is  a leaf*/
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Returns the depth of a given node in a binary tree
 * @tree: A pointer to the node to meassure the depth of
 *
 * Return: The depth of the node
 */

size_t depth(const binary_tree_t *tree)
{
	/*if the node has a parent, increment depth and move to the*/
       /*	parent node*/
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);

}

/**
 * get_leaf - Return a leaf of a binary tree
 * @tree: A pointer to the root node of the tree to find a leaf in
 *
 * Return: A pointer to the first encountered leaf
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	/*if the current node is a leaf, return it*/
	if (is_leaf(tree) == 1)
		return (tree);

	/*if not a leaf, recursively search in left and righ subtree*/
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 *  is_perfect_recursive  - checks if a binary tree is perfect recursively
 *  @tree: A pointer to the root node of the tree to check
 *  @leaf_depth: A pointer to the root node of the tree to check
 *  @level: level of current node
 *
 *  Return: if the tree is perfect, 1 otherwise 0
 */

int is_perfect_recursive(const binary_tree_t *tree
		, size_t leaf_depth, size_t level)
{
	/*if the current node is leaf, check if its depth matches leaf depth*/
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	/*if the current node is not a leaf and has one child missing*/
       /*	return 0*/
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	/*Recursively check the left and right subtress*/
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree check
 *
 * Return: if tree is NULL or not perfect, o
 * otherwise, 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/*if the tree is NULL, it's not perfect*/
	if (tree == NULL)
		return (0);

	/*calculate the depth of a leaf in the tree and recursively*/
	/*check for perfection*/
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
