#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a node on the left child
 * @parent: pointer to the node on the left-child in
 * @value: value to store the new node
 * Return: pointer to created node or NULL on failure
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/*if the parent has left child*/
	if (parent->left != NULL)
	{
		/*set the nw_nodes left child to parents current left child*/
		new_node->left = parent->left;
		/*se the parent of current left child to the new_node*/
		parent->left->parent = new_node;
	}
	/*se the parents left child to the new_node*/
	parent->left = new_node;

	/*Return a pointer to the new_node*/
	return (new_node);
}

