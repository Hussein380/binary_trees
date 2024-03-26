#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that insert a node on the right child
 * @parent: pointer to the node on the right-child in
 * @value: value to store the new node
 * Return: pointer to created node or NULL on failure
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*create a  new node */
	binary_tree_t *new_node;

	/*check if parent node is NULL*/
	if (parent == NULL)
		return (NULL);

	/*create a new_node with given value*/
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/*if the parent has right child*/
	if (parent->right != NULL)
	{
		/*set the nw_nodes right child to parents current right child*/
		new_node->right = parent->right;
		/*se the parent of current right child to the new_node*/
		parent->right->parent = new_node;
	}
	/*se the parents right child to the new_node*/
	parent->right = new_node;

	/*Return a pointer to the new_node*/
	return (new_node);
}

