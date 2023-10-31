#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: This function traverses a binary tree using post-order
 * traversal and applies the given function to each node's value.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Recur on the left subtree*/
	binary_tree_postorder(tree->left, func);

	/* Recur on the right subtree*/
	binary_tree_postorder(tree->right, func);

	/* Apply the function to the current node's value*/
	func(tree->n);
}
