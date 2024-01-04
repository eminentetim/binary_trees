#include "binary_trees.h"
/**
 * binary_tree_insert_right - creates a new binary branch on the left
 * @parent: Parent node
 * @value: Value of node
 * Return: Create a new Binary tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	/** retrun null if parent is null */
	if (parent == NULL)
	{
		return (NULL);
	}

	/** return Null on failure */
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/** If the parent already has a left child, update pointers*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	/** Update the parent's left child to be the new node*/
	parent->left = new_node;
	return (new_node);
}
