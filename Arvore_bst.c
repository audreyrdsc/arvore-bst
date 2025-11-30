#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
} Node;

Node *search_node(Node *root, int value)
{
    if (!root)
        return NULL;
    if (value == root->key)
        return root;
    if (value < root->key)
        return search_node(root->left, value);
    return search_node(root->right, value);
}

Node *find_min(Node *root)
{
    while (root->left)
        root = root->left;
    return root;
}