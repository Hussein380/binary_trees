# Binary Tree Functions in C

This repository contains a collection of functions implemented in C for working with binary trees. These functions provide various operations such as measuring height, depth, size, counting leaves and nodes, checking balance factors, and determining if a tree is full or perfect. Additionally, functions to find siblings and uncles of nodes are included.

# Function List

Below is a summary of the functions available in this repository:

1. Height: Measures the height of a binary tree.
2. Depth: Measures the depth of a node in a binary tree.
3. Size: Measures the size (number of nodes) of a binary tree.
4. Leaves: Counts the number of leaves in a binary tree.
5. Nodes: Counts the number of nodes with at least one child in a binary tree.
6. Balance Factor: Measures the balance factor of a binary tree.
7. Is Full: Checks if a binary tree is full.
8. Is Perfect: Checks if a binary tree is perfect.
9. Sibling: Finds the sibling of a node in a binary tree.
10. Uncle: Finds the uncle of a node in a binary tree.

# Usage

Each function comes with its own header file and implementation file. You can include the necessary header file in your C program and use the functions as needed. Make sure to link the corresponding implementation files during compilation.

# Example

c
#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;
    size_t height;

    // Create a sample binary tree
    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 128);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_insert_left(root, 45);

    // Print the tree structure
    binary_tree_print(root);

    // Measure the height of the tree
    height = binary_tree_height(root);
    printf("Height of the tree: %lu\n", height);

    return (0);
}


# Compilation

To compile the example program, use the following command:

gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c <function_files.c> <main_file.c> -o <output_file>


Replace `<function_files.c>` with the necessary function implementation files, `<main_file.c>` with your main program file, and `<output_file>` with the desired name of the executable.

# Repository Structure

- binary_trees.h: Header file containing function prototypes.
- binary_tree_print.c: Utility function to print binary trees.
- Function Implementation Files: Files containing the implementations of each function.
- Example Main Files: Files demonstrating the usage of the functions.
- Makefile: Makefile for easy compilation.
