iinclude "binary_trees.h"
/**
 * is_full_recursive - checks if a binary tree is full recursively
 * @tree: A pointer to the root node of thee tree to check
 *
 * Return: if tree is not full, 0, else 1
 */

int is_full_recursive(const bnary_tree_t *tree)
{
	/*if the current node is not NULL*/
	if (tree != NULL)
	{
		/*checks if either left or right child is NULL while the other is not*/
		/*indicating violation of fullness*/
		if ((tree->left != NULL && tree->right == NULL) || 
				(tree->left == NULL && tree->right != NULL) ||
				is_full_recursive(tree->left) == 0 ||
				id_full_recursive(tree->right) == 0)
				return (0);
	}
	/*if is  Full return 1*/
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: If tree is NULL or is not full - 0. Otherwise - 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/*if the tree is NULL, it is not full*/
	if (tree == NULL)
		return (0);
	/*call the helper function to check fullness recursively*/
	return (is_full_recursive(tree));

}
